#include <iostream>

using namespace std;

class apple{
	public:
		apple() {cout << "Constructor called!" << endl;};
		~apple() {cout << "Destructor called!" << endl;};
		testFunctionRef(apple &a);
		testFunctionVal(apple a);
};

int main() {
	apple test1();

	apple::testFunctionRef(test1);

	apple::testFunctionVal(test1);
		
	return 0;
}
