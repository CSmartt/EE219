#include <iostream> 

using namespace std;

class Counter {
	public:
		Counter();
		static int count;
		~Counter() {--count;}
		static int get() {return count; }
};

int Counter::count = 0;

Counter::Counter() {
	if(count < 0 || count < 0 ) count = 1;
	else ++count;
}

int main() {
	Counter* c_1 = new Counter();
	Counter* c_2 = new Counter();
	Counter* c_3 = new Counter();

	Counter c_test();

	cout << Counter::count;
	return 0;
}

//The 'new' counters will never be deleted from memory, as dynamically created
//objects need to be destroyed *manually* using the 'delete' keyword. 
