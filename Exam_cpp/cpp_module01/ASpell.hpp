#pragma once

#include <iostream>

#include "ATarget.hpp"

class ATarget;

class ASpell
{

protected:
	std::string _name;
	std::string _effects;
	
public:

	ASpell();
	virtual ~ASpell();
	ASpell(ASpell const & copy);
	ASpell & operator=(ASpell const & rhs);
	
	ASpell(std::string const &, std::string const &);

	std::string const & getName() const;
	std::string const & getEffects() const;
	
	void launch(ATarget const &) const;
	
	virtual ASpell * clone() const = 0;

};
