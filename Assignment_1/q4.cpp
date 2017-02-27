#include <iostream>

using namespace std;

int helloName(string name) {
	cout << ("Hello " + name + "!") << endl;
}

int main() {
	helloName("Cormac");
	return 0;
}
