#pragma once

#include <iostream>
#include <vector>
#include "ATarget.hpp"
#include "ASpell.hpp"

class TargetGenerator
{

private:

	std::vector<ATarget *> 	_inventory;

	TargetGenerator(TargetGenerator const & copy);
	TargetGenerator & operator=(TargetGenerator const & rhs);
public:

	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget*);
	void forgetTargetType(std::string const &);
	ATarget* createTarget(std::string const &);
};
