#include <iostream>

using namespace std;

void countOdds(int data[], int length) {
	int odds = 0;
	for(int i=0; i < length; i++) {
		if(data[i] % 2 == 1) {
			odds++;
		}
	}
	cout << odds << endl;
}

int main() {
	int data[] = {1,2,3,4,5,6,7,8,9,0};
	int arrLength = sizeof(data) / sizeof(data[0]);
	countOdds(data, arrLength);
	return 0;
}
