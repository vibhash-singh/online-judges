#include <iostream>
#include <map>

using namespace std;

unsigned long long int getMaxAmount(unsigned long long int amount);
unsigned long long int max(unsigned long long int numOne,unsigned long long int numTwo);

map<unsigned long long int, unsigned long long int> maxAmounts;

int main() {
	unsigned long long int numOnCoin;

	while (std::cin >> numOnCoin) {	
		std::cout << getMaxAmount(numOnCoin) << "\n";
	}
	
	return 0;
}

unsigned long long int getMaxAmount(unsigned long long int amount) {
	if(maxAmounts[amount] != 0) {
		return maxAmounts[amount];
	}
	
	if (amount == 1) {
		return 1;
	}
	
	if (amount == 0) {
		return 0;
	}	
	
	unsigned long long int optimalSol = amount;
	optimalSol = max(optimalSol, getMaxAmount(amount / 2) + getMaxAmount(amount / 3) + getMaxAmount(amount / 4));
	maxAmounts[amount] = optimalSol;
	
	return optimalSol;
}

unsigned long long int max(unsigned long long int numOne,unsigned long long int numTwo) {
	if (numOne >= numTwo) { 
		return numOne;
	}	
	
	return numTwo;
}

