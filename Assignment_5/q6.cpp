#include <iostream>

using namespace std;

class Point2D {
	public:
		Point2D(double x, double y);
		~Point2D();
		void print();
		void set(Point2D p);
		Point2D midPoint(Point2D p1);
	private:
		double val_x;
		double val_y;
};

Point2D::Point2D(double x, double y) {
	val_x = x;
	val_y = y;
}

void Point2D::print() {
	cout << "X: " << val_x << endl;
	cout << "Y: " << val_y << endl;
}

void Point2D::set(Point2D p) {
	val_x = p.val_x;
	val_y = p.val_y;
}

Point2D Point2D::midPoint(Point2D p1) {
	double mid_x = (val_x + p1.val_x)/2;
	double mid_y = (val_y + p1.val_y)/2;
	return Point2D(mid_x, mid_y);
}

int main() {
	return 0;
}
