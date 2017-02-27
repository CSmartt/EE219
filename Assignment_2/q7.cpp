#include <iostream>

using namespace std;

class rectangle {
	double length;
	double width;

	rectangle(double l, double w);

	double area();
	void info();
};

rectangle::rectangle(double l, double w) {
	length = l;
	width = w;
}

double rectangle::area() {
	return length*width;
}

void rectangle::info() {
	cout << "Length: " << length << endl;
	cout << "Width: " << width << endl;
	cout << "Area: " << area() << endl;
}

int main() {
	return 0;
}
