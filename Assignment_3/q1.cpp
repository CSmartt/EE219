#include <iostream>

using namespace std;

bool isIncreasing(int arr[], int length) {
	for(int i = 1; i < length; i++) {
		if(arr[i] <= arr[i-1]) return false;
	}
	return true;
}

int main() {
	int array[] = {1, 2, 3, 4, 5};
	int length = sizeof(array)/sizeof(0);

	cout << boolalpha << isIncreasing(array, length) << endl;
		
	return 0;
}
