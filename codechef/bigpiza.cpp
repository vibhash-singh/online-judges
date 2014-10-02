#include <iostream>

int main() {
	int testCases;
	std::cin >> testCases;
	int numPeople;

	while (testCases--) {
		std::cin >> numPeople;
		
		if (numPeople % 4  == 1) {
			std::cout << "Bhima\n";
		} else {
			std::cout << "Arjuna\n";
		}
	}
	
	return 0;
} 
