#include <iostream>

using namespace std;

class Colour{
	private:
		int red, green, blue;
	public:
		int r();
		int g();
		int b();
		virtual string print();
		Colour(int r, int g , int b);
};

Colour::Colour(int r, int g, int b) {
	red = r;
	green = g;
	blue = b;
}

int Colour::r() {
	return red;
}

int Colour::g() {
	return green;
}

int Colour::b() {
	return blue;
}

string Colour::print() {
	cout << "R: " << red << " G: " << green << " B: " << blue << endl;
}

class Shape {
	public:
		Shape(int red, int green, int blue);
		virtual void scaleBy(double);
		string print();
		Colour getColour();
	private:
		Colour colour;
};

Shape::Shape(int red, int green, int blue) 
	: colour(red, green, blue) {
}

void Shape::scaleBy(double scale) {
}

string Shape::print() {
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
		string print();
		Circle(int r, int g, int b, int c_x, int c_y, int rad);
};

Circle::Circle(int r, int g, int b, int c_x, int c_y, int rad)
	: Shape(r, g, b) {
	centre_x = c_x;
	centre_y = c_y;
	radius = rad;
}

void Circle::scaleBy(double scale) {
}

int countShapesByColour(Shape shapes[], int size, Colour c) {
}

int main() {
	return 0;
}
