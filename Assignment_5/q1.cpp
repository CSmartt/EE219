#include <iostream>
#include <cmath>

using namespace std;

int countOnes(int n) {
	static int pos = 1, ones = 0;
	int num_digits = floor( log10(abs(n?n:1)) + 1 );
	if((int)(n/pow(10,(pos-1))) % 10 == 1) {
		ones += 1;
		pos += 1;
	}else pos += 1;
	if(pos = num_digits) {
		return ones;
	}else return countOnes(n);
}

int main() {
	int countMe = 12341211;
	cout << countOnes(countMe) << endl;
	return 0;
}
