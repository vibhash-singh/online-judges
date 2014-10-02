#include <iostream>
#include <map>

int captureMaxPawns(char **b, int n, int kI, int kJ);
int max(int a, int b, int c, int d);

using namespace std;

map<int, int> pawnsCaptured; 

 int main() {
	int testCases;
	int boardSize;
		int knightI, knightJ;
	char board[1000][1000];
	
	std::cin >> testCases;
	
	while (testCases--) {
		std::cin >> boardSize;
		
		for (int i = 0; i < boardSize; i++) {
			for (int j = 0; j < boardSize; j++) {
				std::cin >> board[i][j];
				if (board[i][j] == 'K') {
					knightI = i;
					knightJ = j;
				}
			}
		}
		
		std::cout << captureMaxPawns(board, boardSize, knightI, knightJ) << "\n";
	}
 
	return 0;
 }
 
 int caputreMaxPawns(char **b, int n, int kI, int kJ) {
	// if(pawnsCaptured[b[kI][kJ]] == 0 || kI >= n || kJ >= n ) {
		// return 0;
	// } else {
		// return pawnsCaptured[b[kI][kJ]];
	// }
	
	//int maxPawns = 0;
	
	if (kI >= n || kj >= n) {
		return 0;
	} else {
		if (b[kI][kJ] == 'P') {
			return 1 + max(captureMaxPawns(int *b, int n, int kI - 2, int kJ + 1), captureMaxPawns(int *b, int n, int kI - 1, int kJ + 2),
							captureMaxPawns(int *b, int n, int kI + 1, int kJ + 2), captureMaxPawns(int *b, int n, int kI + 3, int kJ + 1));
		} else {
			return max(captureMaxPawns(int *b, int n, int kI - 2, int kJ + 1), captureMaxPawns(int *b, int n, int kI - 1, int kJ + 2),
						captureMaxPawns(int *b, int n, int kI + 1, int kJ + 2), captureMaxPawns(int *b, int n, int kI + 3, int kJ + 1));
		}
	}
}

int max(int a, int b, int c, int d) {
	int max = a;

	if (max < b) {
		max = b;
	}
	
	if (max < c) {
		max = c;
	}
	
	if (max < d) {
		max = d;
	}
	
	return max;
}