#include <iostream>
#include <cmath>

using namespace std;

void square(double &d) {
	d = pow(d, 2);
}

int main() {
	double d = 50000000;
	square(d);
	cout << d << endl;
	return 0;
}
