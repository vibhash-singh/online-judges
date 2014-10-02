#include <iostream>

long calcMaxArea(int n);

int main() {
	int testCases;
	int numSticks;
	
	std::cin >> testCases;
	
	while (testCases--) {
		std::cin >> numSticks;
		std::cout << calcMaxArea(numSticks) << "\n";		
	}
		
	return 0; 
}

long calcMaxArea(int n) {
	n = n / 2;
	
	if (n % 2 == 0) {
		return n / 2 * n / 2;
	}
	
	return n / 2 * (n + 1) / 2;
}
