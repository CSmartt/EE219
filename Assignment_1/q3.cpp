#include <iostream>

using namespace std;

int productDouble(int a, int b) {
	if(a != b) {
		cout << ((a + b)) << endl;
	}
	else {
		cout << (2 * (a + b)) << endl;
	}
}

int main() {
	productDouble(20, 35);	
	return 0;
}
