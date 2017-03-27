#include <iostream>
#include <algorithm>

using namespace std;

class DataArray {
	private:
		double* values;
		int arraysize;
	
	public:
		DataArray(int size);
		DataArray(double a[], int size);
		~DataArray();
		double min();
		double max();
		DataArray scaleBy(double factor);
};

DataArray::DataArray(int size)
	:	values	(new double[size]) {
}

DataArray::DataArray(double a[], int size)
	:	values	(new double[size]) {
	for(int i = 0; i <= size; i++) {
		values[i] = a[i];
	}
}

double DataArray::min() {
}

double DataArray::max() {
}

DataArray DataArray::scaleBy(double factor) {
}

DataArray::~DataArray() {
	delete[] values;
}

int main() {
	return 0;
}
