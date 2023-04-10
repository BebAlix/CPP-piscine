#pragma once

#include <iostream>
#include <vector>
#include "ATarget.hpp"
#include "ASpell.hpp"

class SpellBook
{

private:

	SpellBook(SpellBook const & copy);
	SpellBook & operator=(SpellBook const & rhs);

	std::vector<ASpell *> _inventory;

public:

	SpellBook();
	~SpellBook();

	void learnSpell(ASpell *);
	void forgetSpell(std::string const &);
	ASpell* createSpell(std::string const &);
};
