#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class chatBot {
	private:
		int lastResponse;
		int lastQuestion;
		string input;
		//array<string, 7> responses;	
		//array<string, 7> questions;
		string responses[7];
		string questions[7];

	public:
		string botName;
		//chatBot(array<string, 7> r, array<string, 7> q, string name);
		chatBot(string r[7], string q[7], string name);
		string respondTo(string s);
		string getName();
};


chatBot::chatBot(string r[], string q[], string name) {
	for(int i = 0; i < 7; i++) {
		responses[i] = r[i];
		questions[i] = q[i];
	}
	botName = name;
}

string chatBot::getName() {
	return botName;
}

string chatBot::respondTo(string s) {
	srand(time(NULL));
	if(s.back() == '?') {
		for(int i = rand() % 7; i != lastResponse;) {
			cout << botName << ": " << responses[i] << endl;
			lastResponse = i;
		}
	}
	else{
		for(int i = rand() % 7; i != lastQuestion;) {
			cout << botName << ": " << questions[i] << endl;
			lastQuestion= i;
		}
	}
}

//Responses gathered from http://whatthecommit.com/
string responses[7] = {
"Replace all whitespaces with tabs.",
"Reinventing the wheel. Again.",
"what the hell happened here",
"Done, to whoever merges this, good luck.",
"stopped caring 18 commits ago",
"Only Tom Cruise knows why.",
"I'll tell you when you're older!"
};

string questions[7] = {
"How did I get here?",
"Are we there yet?",
"What's the opposite of opposite?",
"Is Nixon still president?",
"Do androids dream of electric sheep?",
"If you were a biscuit, what biscuit would you be?",
"Can I go home now?"
};

int main() {
	chatBot bot1(responses, questions, "Eric"); 
	
	string in;

	getline(cin,in);

	bot1.respondTo(in);

	return 0;
}
