#include <iostream>

void initializeArray();
int getMinSteps(int n);
int min(int resultOne, int resultTwo);

int n;
int memo[11];

int main() {
	int i = 5;
	
	//std::cin >> n;
	initializeArray();
	std::cout << getMinSteps(10);
	
	return 0;
}

void initializeArray() {
	for (int i = 0 ; i < 11; i++) {
		memo[i] = -1;
	}
}

int getMinSteps(int n) {

	if (n == 1) {
		return 0;
	}
	
	if (memo[n] != -1) {
		return memo[n];
	}
	
	int optimalSol = 1 + getMinSteps(n - 1);
	
	if (n % 2 == 0) {
		optimalSol = min(optimalSol, 1 + getMinSteps(n / 2));
	}
	
	if (n % 3 == 0) {
		optimalSol = min(optimalSol, 1 + getMinSteps(n / 3));
	}
	
	memo[n] = optimalSol;
	return optimalSol;
}

int min(int resultOne, int resultTwo) {
	if(resultOne <= resultTwo) {
		return resultOne;
	}
	
	return resultTwo;
}
