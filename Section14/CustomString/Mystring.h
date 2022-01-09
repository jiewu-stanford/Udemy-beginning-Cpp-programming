#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
private:
	char *str;
public:
	Mystring();
	Mystring(const char *s);				// overloaded constructor
	Mystring(Mystring &&source);			// move constructor
	Mystring(const Mystring &source);
	~Mystring();
	
	void display() const;
	int get_length() const;
	const char *get_str() const;
	
	Mystring &operator=(const Mystring &rhs);		// overload assignment
	Mystring &operator=(Mystring &&rhs);			// move assignment
};

#endif // MYSTRING_H