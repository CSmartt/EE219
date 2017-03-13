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

		Colour();

};

class Shape: public Colour{
	public:
		Shape();
		virtual void scaleBy(double);
		string print();
};

class Circle: public Shape{
	private:
		int centre_x;
		int centre_y;
		int radius;
	public:
		void scaleBy(double);
		string print();
};

int countShapesByColour(Shape shapes[], int size, Colour c) {
}

int main() {
	return 0;
}
