#pragma once

#include <iostream>

#include "ATarget.hpp"

class Dummy : public ATarget
{

protected:
	std::string _type;
	
public:

	Dummy();
	virtual ~Dummy();
	
	
	virtual ATarget * clone() const;

};
