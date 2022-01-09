#include <cstring>
#include <iostream>
#include "Mystring.h"

Mystring::Mystring() : str{nullptr} {
	str = new char[1];
	*str = '\0';
}

Mystring::Mystring(const char *s): str{nullptr} {
	if (s==nullptr) {
		str = new char[1];
		*str = '\0';
	} else {
		str = new char[std::strlen(s)+1];
		std::strcpy(str,s);
	}
}

Mystring::Mystring(const Mystring &source): str{nullptr} {
	str = new char[std::strlen(source.str)+1];
	std::strcpy(str,source.str);
	std::cout << "Copy constructor used." << std::endl;
}

Mystring::Mystring(Mystring &&source): str{source.str} {
	source.str = nullptr;
	std::cout << "Move constructor used." << std::endl;
}

Mystring::~Mystring() {
	delete [] str;
}

void Mystring::display() const {
	std::cout << str << ":" << get_length() << std::endl;
}

int Mystring::get_length() const {return std::strlen(str);}

const char *Mystring::get_str() const {return str;}

Mystring &Mystring::operator=(const Mystring &rhs) {
	std::cout << "Copy assignment." << std::endl;
	if (this==&rhs)			// check self-assignment
		return *this;
	
	delete [] this->str;
	str = new char[std::strlen(rhs.str)+1];
	std::strcpy(this->str,rhs.str);
	return *this;
}

Mystring &Mystring::operator=(Mystring &&rhs) {
	std::cout << "Move assignment." << std::endl;
	if (this==&rhs)			// check self-assignment
		return *this;
	
	delete [] this->str;
	this->str = rhs.str;
	rhs.str = nullptr;
	return *this;
}

std::ostream &operator<< (std::ostream &os,const Mystring &rhs) {
	os << rhs.str;
//	os << rhs.get_str();	// if not friend
	return os;
}

std::istream &operator>> (std::istream &is,Mystring &rhs) {
	char *buff = new char [1000];
	is >> buff;
	rhs = Mystring{buff};
	delete [] buff;
	return is;
}