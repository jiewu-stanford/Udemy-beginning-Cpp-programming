#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
	friend std::ostream &operator<< (std::ostream &os,const Mystring &rhs);
	friend std::istream &operator>> (std::istream &is,Mystring &rhs);
	
	friend bool operator==(const Mystring &lhs, const Mystring &rhs);
	friend bool operator<(const Mystring &lhs, const Mystring &rhs);
	friend Mystring operator-(const Mystring &obj);
	friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
	friend Mystring operator+=(Mystring &lhs, const Mystring &rhs);
	friend Mystring operator*(const Mystring &lhs,int n);
	friend Mystring operator*=(Mystring &lhs,int n);
	friend Mystring operator++(Mystring &obj);
	friend Mystring operator++(Mystring &obj,int);
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
};

#endif // MYSTRING_H