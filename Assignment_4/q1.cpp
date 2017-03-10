#include <iostream>

using namespace std;

class GuessingGame {
	public:
		GuessingGame(int maxval);
		bool guess(int);

	private:
		int maxvalue;
		int answer;
};

GuessingGame::GuessingGame(int maxval) {
	maxvalue = maxval;
	answer = rand() % maxvalue - 1;
}

bool GuessingGame::guess(int guess) {
	cout << "You guessed: " << guess << endl;
	
	if(guess == answer) return true;
	else if(guess > answer) {
		cout << "Too high!" << endl;
		return false;
	}
	else if(guess < answer) {
		cout << "Too low!" << endl;
		return false;
	}
}

int main() {
	srand(time(NULL));
	GuessingGame game_1(100);
	int input;

	while(true) {	
		cin >> input;
		if(game_1.guess(input) == true) {
			cout << "Correct!" << endl;	
			break;
		}
		
	}
	return 0;
}
