#include "ATarget.hpp"

	
	
ATarget::ATarget() {}
ATarget::~ATarget() {}
ATarget::ATarget(ATarget const & copy)
{
	*this = copy;
}
ATarget & ATarget::operator=(ATarget const & rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;		
	}
	return *this;
}
	
	
ATarget::ATarget(std::string const & t): _type(t) {}

std::string const & ATarget::getType() const {return _type;}

void ATarget::getHitBySpell(ASpell const & spell) const
{
	std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;

}

