#pragma once

#include <iostream>

#include "ATarget.hpp"

class BrickWall : public ATarget
{

protected:
	std::string _type;
	
public:

	BrickWall();
	virtual ~BrickWall();
	
	
	virtual ATarget * clone() const;

};
