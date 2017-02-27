#include <iostream>

using namespace std;

int swapElements(int a[], int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	for(i=0; i < 10; i++) {
		printf("%d\n", a[i]);
	}
}

int main() {
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	swapElements(array, 3, 8);
	return 0;
}
