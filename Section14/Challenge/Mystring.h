#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
	friend std::ostream &operator<< (std::ostream &os,const Mystring &rhs);
	friend std::istream &operator>> (std::istream &is,Mystring &rhs);
private:
	char *str;
public:
	Mystring();
	Mystring(const char *s);				// overloaded constructor
	Mystring(Mystring &&source);			// move constructor
	Mystring(const Mystring &source);
	~Mystring();
	
	int get_length() const;
	const char *get_str() const;
	
	Mystring &operator=(const Mystring &rhs);		// overload assignment
	Mystring &operator=(Mystring &&rhs);			// move assignment
	
	bool operator==(const Mystring &rhs) const;
	bool operator<(const Mystring &rhs) const;
	Mystring operator-() const;
	Mystring operator+(const Mystring &rhs) const;
	Mystring operator+=(const Mystring &rhs);
	Mystring operator*(int n) const;
	Mystring operator*=(int n);
	Mystring operator++();
	Mystring operator++(int);
};

#endif // MYSTRING_H