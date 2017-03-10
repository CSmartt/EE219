#include <iostream>

using namespace std;

class GuessingGame {
	public:
		GuessingGame(int maxval);
		bool guess(int);

	private:
		int maxvalue;
		int answer;
		int counter;
		int maxguesses;
};

GuessingGame::GuessingGame(int maxval) {
	maxvalue = maxval;
	answer = rand() % maxvalue - 1;
	maxguesses = 1;

	counter = 0;

	for(int j = maxval; j > 1;) {
		j = j/2;
		maxguesses += 1;
	}
	cout << "You have " << maxguesses << " guesses." << endl;
}

bool GuessingGame::guess(int guess) {
	cout << "Guess: " << counter << endl;
	
	cout << "You guessed: " << guess << endl;

	counter = counter + 1;

	if(counter > maxguesses) {
		cout << "No guesses remaining!" << endl << "The answer was: " << answer << endl;
		return false;
	}

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
