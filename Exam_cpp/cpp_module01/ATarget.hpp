#pragma once

#include <iostream>

#include "ASpell.hpp"

class ASpell;

class ATarget
{

protected:
	std::string _type;
	
public:

	ATarget();
	virtual ~ATarget();
	ATarget(ATarget const & copy);
	ATarget & operator=(ATarget const & rhs);
	
	ATarget(std::string const &);

	std::string const & getType() const;
	
	void getHitBySpell(ASpell const &) const;
	
	
	virtual ATarget * clone() const = 0;

};
