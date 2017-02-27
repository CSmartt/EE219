#include <iostream>

using namespace std;

bool deMorgan(bool A, bool B) {
	
	cout << "A = " << boolalpha << A << endl << "B = " <<  boolalpha << B << endl;
	if(A = true && A == B) {
		cout << "NOT (A AND B) = false" << endl;
		cout << "(NOT A) OR (NOT B) = false" << endl;
	}
	
	else {
		cout << "NOT (A AND B) = true" << endl;
		cout << "(NOT A) OR (NOT B) = true" << endl;
	}
}

int main() {
	bool A = true;
	bool B = false;

	deMorgan(A, B);
		
	return 0;
}
