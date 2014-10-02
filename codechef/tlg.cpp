#include <iostream>
#include <stdlib.h>

#define PLAYER1 1
#define PLAYER2 2

int main() {
	int numRounds;
	int turn = 0;
	int scorePlayer1, scorePlayer2;
	int maxLead = 0;
	int winner;
	int lead;
	int currentTotalScore1 = 0, currentTotalScore2 = 0;
	
	std::cin >> numRounds;
	
	while (numRounds--) {
		std::cin >> scorePlayer1 >> scorePlayer2;
		
		currentTotalScore1 = currentTotalScore1 + scorePlayer1;
		currentTotalScore2 = currentTotalScore2 + scorePlayer2;
		
		lead = currentTotalScore1 - currentTotalScore2;
			
		if (abs(lead) > maxLead) {
			maxLead = abs(lead);
			winner = lead < 0 ? PLAYER2 : PLAYER1;
		}
	}
	
	std::cout << winner << " " << maxLead;
	
	return 0;
} 
