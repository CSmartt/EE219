#include <iostream>
#include <string>
#include <cmath>

class Colour{
	private:
		int red, green, blue;
	public:
		int r() const;
		int g() const;
		int b() const;
		virtual std::string print();
		Colour(int r, int g , int b);
		//friend bool operator== (const Colour &c1, const Colour &c2);
};

Colour::Colour(int r, int g, int b) {
	red = r;
	green = g;
	blue = b;
}

bool operator== (const Colour &c1, const Colour &c2) {
	if(c1.r() == c2.r() && c1.g() == c2.g() && c1.b() == c2.b()) {
		return true;
	}else return false;
}

int Colour::r() const {
	return red;
}

int Colour::g() const {
	return green;
}

int Colour::b() const {
	return blue;
}

std::string Colour::print() {
	std::cout << "(" << red << "," << green << "," << blue << ")" << std::endl;
}

class Shape {
	public:
		Shape(int red, int green, int blue);
		virtual void scaleBy(double);
		std::string print();
		Colour getColour();
		Colour colour;
};

Shape::Shape(int red, int green, int blue) 
	: colour(red, green, blue) {
}

void Shape::scaleBy(double scale) {
}

std::string Shape::print() {
	return colour.print();
}

Colour Shape::getColour() {
	return colour;
}

class Circle: public Shape {
	private:
		int centre_x;
		int centre_y;
		int radius;
	public:
		void scaleBy(double);
		std::string print();
		Circle(int r, int g, int b, int c_x, int c_y, int rad);
};

Circle::Circle(int r, int g, int b, int c_x, int c_y, int rad)
	: Shape(r, g, b) {
	centre_x = c_x;
	centre_y = c_y;
	radius = rad;
}

void Circle::scaleBy(double scale) {
	radius = radius*(sqrt(scale));
}

std::string Circle::print() {
	std::cout << "Centre: (" << centre_x << "," << centre_y << ")" << std::endl << "Radius: " << radius << std::endl;
	colour.print();
}

int countShapesByColour(Shape* shapes[], int size, Colour c) {
	int count = 0;
	for(int i = 0; i < size; i++) {
		if(shapes[i]->getColour() == c) count += 1;
	}
	return count;
}

int main() {
	Circle circles[] = {c1(100, 100, 100, 50, 50, 20),
						c2(100, 100, 100, 50, 50, 20),
						c3(100, 100, 100, 50, 50, 20),
						c4(100, 200, 300, 50, 50, 20),
						}
	Colour testcolour(100, 100, 100);
	countShapesByColour(circles, 4, testcolour);

	return 0;
}
