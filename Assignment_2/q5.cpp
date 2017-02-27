#include <iostream>

using namespace std;

double average(double data[], int size) {
	double total = 0;
	for(int i = 0; i < size; i++) {
		total += data[i];
	}
	double avg = total/size;
	return avg;
}

int main() {
	double blah[] = {1,2,3,4,5,6,7,8,9};
	int arrLength = sizeof(blah)/sizeof(blah[0]);
	cout << average(blah, arrLength) << endl;
}
