#include "Warlock.hpp"

Warlock::~Warlock() 
{
	std::cout << _name << ": My job here is done!" << std::endl;
}
	
Warlock::Warlock(std::string const & n, std::string const & t): _name(n), _title(t)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

std::string const & Warlock::getName() const {return _name;}
std::string const & Warlock::getTitle() const {return _title;}
void Warlock::setTitle(std::string const & t) {_title = t;}


void Warlock::learnSpell(ASpell * spell)
{

	for (size_t i = 0; i < _inventory.size(); i++)
	{
		if (_inventory[i]->getName() == spell->getName())
			return ;
	}
	_inventory.push_back(spell->clone());
}

void Warlock::forgetSpell(std::string spellName)
{
	for (size_t i = 0; i < _inventory.size(); i++)
	{
		if (_inventory[i]->getName() == spellName)
		{
			delete _inventory[i];		
			_inventory.erase(_inventory.begin() + i);
		}
	}
}

void Warlock::launchSpell(std::string spellName, ATarget const & target)
{
	for (size_t i = 0; i < _inventory.size(); i++)
	{
		if (_inventory[i]->getName() == spellName)
			_inventory[i]->launch(target);
	}
}

