#include "Warlock.hpp"

Warlock::Warlock(std::string const & n, std::string const & t): _name(n), _title(t)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() 
{
	std::cout << _name << ": My job here is done!" << std::endl;
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
	_book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName)
{
	_book.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget const & target)
{
	ASpell * spell;
	
	spell = _book.createSpell(spellName);
	spell->launch(target);
	delete spell;
}

