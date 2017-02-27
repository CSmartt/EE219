#include <iostream>

using namespace std;

void swapElements(int a[], int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

int reverseArray(int array[], int length) {
	int i = 0, j = length;
	while(i != j) {
		swapElements(array, i, j);
		i++;
		j--;	
	}
	for(int k = 1; k <= length; k++) {
		printf("%d\n", array[k]);
	}
}

int main() {
	int array[] = {1, 2, 3, 4, 5, 6, 7 ,8, 9, 10};
	int arrLength = sizeof(array) / sizeof(array[0]);
	reverseArray(array, arrLength);
	return 0;
}
