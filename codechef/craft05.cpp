#include <iostream>

int main() {
	int testCases;
	int x, y, z;
	int numNails;
	int pricePerNail;
	
	std::cin >> testCases;
	
	while (testCases--) {
		std::cin >> numNails;
		std::cin >> x >> y >> z;
		
		int midNum = x * 1000 + y * 100 + z * 10;
		bool found = false;
		int i, j, totalPrice;
		
		for (i = 9; i >=1; i--) {
			int firstNum = i * 10000;
		
			for (j = 9; j >= 0; j--) {
				totalPrice = firstNum + midNum + j;
				
				if (totalPrice % numNails == 0) {
					found = true;
					pricePerNail = totalPrice / numNails;
					break;
				}
			}
			
			if (found) {
				std::cout << i << " " << j << " " << pricePerNail << "\n";
				break;
			}
		}
		
		if (!found) {
			std::cout << "0\n";
		}
	}
	
	return 0;
}
