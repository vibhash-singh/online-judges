#include <iostream>
#include <math.h>

bool isPayable(int n, int m);

int main() {
	int testCases;
	std::cin >> testCases;
	
	int noOfBankNotes, moneyToPay;
	
	while (testCases--) {
		std::cin >> noOfBankNotes >> moneyToPay;
		
		if(isPayable(noOfBankNotes, moneyToPay)) {
			std::cout << "Yes\n";
		} else {
			std::cout << "No\n";
		}
	}
	
	return 0;
}

bool isPayable(int n, int m) {
	int noteValues[n];
	int limit = (int) pow(2, n);
	
	for (int note = 0; note < n; note++) {
		std::cin >> noteValues[note];
	}
	
	for (int i = 0; i < limit; i++) {
		int sum = 0;
	
		for (int j = 0; j < n; j++) {
			if ((i & (1 << j)) != 0) {
				sum = sum + noteValues[j];	
			}
		}
		
		if (sum == m) {
			return true;
		}
	}
	
	return false;
}

