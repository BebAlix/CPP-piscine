#pragma once

#include <iostream>

class Warlock
{

private:

	Warlock();
	Warlock(Warlock const & copy);
	Warlock & operator=(Warlock const & rhs);

	std::string _name;
	std::string _title;
public:

	~Warlock();
	
	Warlock(std::string const &, std::string const &);

	std::string const & getName() const;
	std::string const & getTitle() const;
	void setTitle(std::string const &);
	
	void introduce() const;

};
