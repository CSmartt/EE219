#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//Responses gathered from http://whatthecommit.com/
string responses[] = {
"Replace all whitespaces with tabs.",
"Reinventing the wheel. Again.",
"what the hell happened here",
"Done, to whoever merges this, good luck.",
"stopped caring 18 commits ago",
"Only Tom Cruise knows why.",
"I'll tell you when you're older!"
};

int chatBot() {
	string str;
	int lastResponse;
	
	srand(time(NULL));
	
	cout << "Hello. How are you today?" << endl;
	while(str != "Bye!") {
		getline(std::cin,str);
		for(int i = rand() % 7; i != lastResponse;) {
			cout << responses[i] << endl;
			lastResponse = i;
		}
	}
}

int main() {
	chatBot();
	return 0;
}
