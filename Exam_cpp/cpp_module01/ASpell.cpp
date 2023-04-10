#include "ASpell.hpp"

	
	
ASpell::ASpell() {}
ASpell::~ASpell() {}

ASpell::ASpell(ASpell const & copy)
{
	*this = copy;
}

ASpell & ASpell::operator=(ASpell const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_effects = rhs._effects;
	}
	return *this;
}
		
ASpell::ASpell(std::string const & n, std::string const & t): _name(n), _effects(t) {}

std::string const & ASpell::getName() const {return _name;}
std::string const & ASpell::getEffects() const {return _effects;}


void ASpell::launch(ATarget const & target) const
{
	target.getHitBySpell(*this);
}
