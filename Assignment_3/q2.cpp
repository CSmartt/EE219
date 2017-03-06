#include <iostream>
#include <string>

using namespace std;

string cipher(string s, int n) {
	string output;

	for(int i = 0; i < s.length(); i++) {
		if(isupper(s[i]))
				output += char(int(s[i] + n - 65) % 26 + 65);
		else
				output += char(int(s[i] + n - 97) % 26 + 97);
	}
	return output;
}

int main() {
	int shiftBy = -4;
	string encrypt = "Meqexiwxwxvmrk";

	cout << "Input: " << encrypt << endl;
	cout << "Output: " << cipher(encrypt, shiftBy) << endl;	
	
	return 0;
}
