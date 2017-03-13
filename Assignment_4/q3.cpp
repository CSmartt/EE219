#include <iostream>
#include <string>

using namespace std;

int count = 0;

int prefixMatch(string a, string b) {
	for(std::string::iterator checkA = a.begin(); checkA != a.end(); checkA++) {
		for(std::string::iterator checkB = b.begin(); checkB != b.end(); checkB++) {
			if(*checkA == *checkB) {
				count++;
			} else break;
		}
	}
	cout << "The first " << count << " characters of the input strings match." << endl;
}

int main() {
	
	string test1 = "abcabc";
	string test2 = "abffff";
	
	prefixMatch(test1, test2);
	return 0;
}
