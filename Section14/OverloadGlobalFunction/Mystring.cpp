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
	std::cout << "Copy constructor used." << std::endl;
	str = new char[std::strlen(source.str)+1];
	std::strcpy(str,source.str);
}

Mystring::Mystring(Mystring &&source): str{source.str} {
	std::cout << "Move constructor used." << std::endl;
	source.str = nullptr;
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

bool operator==(const Mystring &lhs, const Mystring &rhs) {
	return (std::strcmp(lhs.str,rhs.str)==0);
}

Mystring operator-(const Mystring &obj) {
	char *buff = new char [std::strlen(obj.str)+1];
	std::strcpy(buff,obj.str);
	for (size_t ii{0}; ii<std::strlen(buff); ++ii)
		buff[ii] = std::tolower(buff[ii]);
	Mystring tmp {buff};
	delete [] buff;
	return tmp;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
	char * buff = new char [std::strlen(lhs.str)+std::strlen(rhs.str)+1];
	std::strcpy(buff,lhs.str);
	std::strcat(buff,rhs.str);
	Mystring tmp {buff};
	delete [] buff;
	return tmp;
}