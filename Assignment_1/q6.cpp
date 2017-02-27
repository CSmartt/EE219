#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void makeCapital(char quote[]) {
	char *token = strtok(quote, " ");
	while(token != NULL) {
		token[0] = toupper(token[0]);
		printf("%s ", token);
		token = strtok(NULL, "");
	}	

}

int main() {
	char brian[] = "Controlling complexity is the essence of computer programming.\n";
	makeCapital(brian);
	return 0;
}
