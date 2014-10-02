#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

bool isCorrectPairOfCells(char *s);
bool isCorrectKnightMove(char *s);

int main() {
	int testCases;
	char str[11];
	
	std::cin >> testCases;
	char ch;
	ch = getchar();
	while (testCases--) {
		
		gets(str);
		
		if (!isCorrectPairOfCells(str)) {
			std::cout << "Error\n";
		} else {
			if (isCorrectKnightMove(str)) {
				std::cout << "Yes\n"; 
			} else {
				std::cout << "No\n";
			}
		}
	}

	return 0;
}

bool isCorrectPairOfCells(char *s) {
	if (strlen(s) != 5) {
		return false;
	}
	
	for (int i = 0; i < 5; i++) {
		if (i == 0 || i == 3) {
			
			if (!(s[i] >= 'a' && s[i] <= 'h')) {
				return false;
			}
		} else if (i == 1 || i == 4) {
		
			if (!(s[i] >= '1' && s[i] <= '8')) {
				return false;
			}
		} else {
		
			if (s[i] != '-') {
				return false;
			}
		}
	}
	
	return true;
	
} 

bool isCorrectKnightMove(char *s) {
	
	int col = s[0];
	int row = s[1];
	
	int col1 = s[3];
	int row1 = s[4];

	if (abs(col - col1) == 1) {
		if (abs(row - row1) == 2) {
			return true;
		}
	}	
	
	if (abs(col - col1) == 2) {
		if (abs(row - row1) == 1) {
			return true;
		}
	}
	
	return false;
}
