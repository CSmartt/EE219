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
		chatBot(string r[6], string q[6], string name);
		string respondTo(string s);
		string getName();
		string lastoutput;
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
		for(int i = rand() % 7 + 1; i != lastResponse;) {
			lastResponse = i;
			lastoutput = responses[i];
			return responses[i];
		}
	}
	else{
		for(int i = rand() % 7 + 1; i != lastQuestion;) {
			lastQuestion= i;
			lastoutput = questions[i];
			return questions[i];
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
	chatBot bot2(responses, questions, "Ernie");
	
	for(int i = 0; i < 10; i++) {	
		cout << bot1.getName() << ": " << bot1.respondTo(bot2.lastoutput) << endl;
		cout << bot2.getName() << ": " << bot2.respondTo(bot1.lastoutput) << endl;
	}
	return 0;
}
