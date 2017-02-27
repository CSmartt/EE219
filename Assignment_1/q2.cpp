#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main() {
	
	for(float i = 0; i >= 0;){
		float intmax = float(INT_MAX);
		
		while(pow(2, i) < intmax) {
			printf("%f\n", pow(2, i));
			i++;
		}
	}
	return 0;
}
