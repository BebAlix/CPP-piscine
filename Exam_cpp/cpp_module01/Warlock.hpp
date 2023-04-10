#pragma once

#include <iostream>
#include <vector>
#include "ATarget.hpp"
#include "ASpell.hpp"

class Warlock
{

private:

	Warlock();
	Warlock(Warlock const & copy);
	Warlock & operator=(Warlock const & rhs);

	std::string _name;
	std::string _title;
	
	std::vector<ASpell *> _inventory;
	
public:

	~Warlock();
	
	Warlock(std::string const &, std::string const &);

	std::string const & getName() const;
	std::string const & getTitle() const;
	void setTitle(std::string const &);
	
	void introduce() const;


	void learnSpell(ASpell *);
	void forgetSpell(std::string);
	void launchSpell(std::string, ATarget const &);
};
