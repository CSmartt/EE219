#include <iostream>

using namespace std;

bool find(int val, int arr[], int size) {
	for(int i = 0; i < size; i++) {
		if(arr[i] == val) {
			return true;
		}
	}
	return false;	
}

int main() {
	int data[] = {1,2,3,4,5,6,7,8,9,0};
	int arrLength = sizeof(data) / sizeof(data[0]);
	bool result = find(1, data, arrLength);
	cout << boolalpha << result << endl;
	return 0;
}
