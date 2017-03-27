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
	arraysize = size;
}

DataArray::DataArray(double a[], int size)
	:	values	(new double[size]) {
	for(int i = 0; i <= size; i++) {
		values[i] = a[i];
	}
	arraysize = size;
}

double DataArray::min() {
	return *std::min_element(values, values + arraysize);
}

double DataArray::max() {
	return *std::max_element(values, values + arraysize);
}

DataArray DataArray::scaleBy(double factor) {
	double scaled[arraysize];
	for(int i = 0; i <= arraysize; i++) {
		scaled[i] = values[i]*2;
	}
	return DataArray (scaled, arraysize);
}

DataArray::~DataArray() {
	delete[] values;
}

int main() {
	return 0;
}
