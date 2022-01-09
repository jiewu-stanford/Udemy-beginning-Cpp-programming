#include <iostream>
#include <vector>

class Shape {
private:
public:
	virtual void draw() = 0;
	virtual void rotate() = 0;
	virtual ~Shape() {}
};


class Open_Shape: public Shape {		// also abstract class
public:
	virtual ~Open_Shape() {}
};


class Closed_Shape: public Shape {		// also abstract class
public:
	virtual ~Closed_Shape() {}
};


class Line final : public Open_Shape {
public:
	virtual void draw() override final {
		std::cout << "Drawing a line" << std::endl;
	}
	virtual void rotate() override final {
		std::cout << "Rotating a line" << std::endl;
	}
	virtual ~Line() {}
};


class Circle final : public Closed_Shape {
public:
	virtual void draw() override final {
		std::cout << "Drawing a circle" << std::endl;
	}
	virtual void rotate() override final {
		std::cout << "Rotating a circle" << std::endl;
	}
	virtual ~Circle() {}
};


class Square final : public Closed_Shape {
public:
	virtual void draw() override final {
		std::cout << "Drawing a square" << std::endl;
	}
	virtual void rotate() override final {
		std::cout << "Rotating a square" << std::endl;
	}
	virtual ~Square() {}
};


void screen_refresh(const std::vector<Shape *> &shapes) {
	std::cout << "Refreshing" << std::endl;
	for (const auto p: shapes)
		p->draw();
}


int main()
{
//	Open_Shape os;
//	Closed_Shape *cs_ptr = new Closed_Shape();

	Circle c;
	c.draw();
	
	Shape *ptr = new Square();
	ptr->draw();
	delete ptr;
	
	std::cout << "-----------------------------------------" << std::endl;
	
	Shape *s1 = new Line();
	Shape *s2 = new Circle();
	Shape *s3 = new Square();
	
	std::vector<Shape *> shapes {s1,s2,s3};
//	for (const auto p: shapes)
//		p->rotate();
	screen_refresh(shapes);
	
	delete s1;
	delete s2;
	delete s3;
	
	return 0;
}