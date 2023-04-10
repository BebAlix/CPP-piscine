#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{
	for (size_t i = 0; i < _inventory.size(); i++)
	{
		delete _inventory[i];
	}
}

void SpellBook::learnSpell(ASpell * spell)
{

	for (size_t i = 0; i < _inventory.size(); i++)
	{
		if (_inventory[i]->getName() == spell->getName())
			return ;
	}
	_inventory.push_back(spell->clone());
}

void SpellBook::forgetSpell(std::string const & spellName)
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

ASpell* SpellBook::createSpell(std::string const & spellName)
{
	for (size_t i = 0; i < _inventory.size(); i++)
	{
		if (_inventory[i]->getName() == spellName)
		{	
			return _inventory[i]->clone();
		}
	}
	return NULL;
}

