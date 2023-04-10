#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() 
{
	for (size_t i = 0; i < _inventory.size(); i++)
	{
		delete _inventory[i];
	}
}

void TargetGenerator::learnTargetType(ATarget* target)
{
	for (size_t i = 0; i < _inventory.size(); i++)
	{
		if (_inventory[i]->getType() == target->getType())
			return ;
	}
	_inventory.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(std::string const & targetName)
{
	for (size_t i = 0; i < _inventory.size(); i++)
	{
		if (_inventory[i]->getType() == targetName)
		{
			delete _inventory[i];		
			_inventory.erase(_inventory.begin() + i);
		}
	}
}

ATarget* TargetGenerator::createTarget(std::string const & targetName)
{
	for (size_t i = 0; i < _inventory.size(); i++)
	{
		if (_inventory[i]->getType() == targetName)
		{	
			return _inventory[i]->clone();
		}
	}
	return NULL;
}

