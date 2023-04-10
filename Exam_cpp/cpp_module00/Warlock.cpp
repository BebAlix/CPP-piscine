#include "Warlock.hpp"

Warlock::~Warlock() 
{
	std::cout << _name << ": My job here is done!" << std::endl;
}
	
Warlock::Warlock(std::string const & n, std::string const & t): _name(n), _title(t)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

std::string const & Warlock::getName() const {return _name;}
std::string const & Warlock::getTitle() const {return _title;}
void Warlock::setTitle(std::string const & t) {_title = t;}
	
void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}
