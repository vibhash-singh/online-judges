#include <iostream>

int main() {
	int piles[100];
	int numPiles;
	int testCases;
	
	
	std::cin >> testCases;
	
	while (testCases--) {
		int numTurns = 0;
		std::cin >> numPiles;
	
		for (int i = 0; i < numPiles; i++) {
			std::cin >> piles[i];
			numTurns = numTurns + piles[i] / (i + 1);
		}
		
		if (numTurns % 2 == 0) {
			std::cout << "BOB\n";
		} else {
			std::cout << "ALICE\n";
		}
	}	
	
	return 0;
}
