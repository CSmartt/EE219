#include <iostream>

using namespace std;

class rectangle {
	private:
		double length;
		double width;

		double area();
	
	public:
		rectangle(double l, double w);
		void info();
		bool congruent(rectangle r);
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

bool rectangle::congruent(rectangle r) {
	if(width == r.width && length == r.length) return true;
	else return false;	
}

int main() {
	rectangle r1(8.9, 12.5);
    rectangle r2(8.9, 12.5);
    r1.info(); r2.info();
    if (r1.congruent(r2))  cout << "Congruent" << endl;
    else  cout << "Not Congruent" << endl;
	
	return 0;
}
