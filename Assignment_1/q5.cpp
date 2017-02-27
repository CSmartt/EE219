#include <iostream>

using namespace std;

int helloName(string &s) {
	cout << "Hello " + s + "!" << endl;
}

int main() {
	string s = "Cormac";
	helloName(s);
	return 0;
}
