#include <iostream>

int main() {
	unsigned long num1, num2;
	std::cin >> num1 >> num2;
	
	while(num1 != 0 || num2 != 0) {
		unsigned long temp = num1 > num2 ? num1 : num2;
		int carries = 0;
		int carryValue = 0;
		
		
		while(temp != 0) {
			int digit1 = num1 % 10;
			int digit2 = num2 % 10;
			int currentColVal = digit1 + digit2 + carryValue;
			
			temp = temp / 10;
			num1 = num1 / 10;
			num2 = num2 / 10;
			
			if (currentColVal >= 10) {				
				carries++;
				carryValue = 1;
			} else {
				carryValue = 0;
			}
		}
		
		if (carries == 0) {
			std::cout << "No carry operation.\n";
		} else if (carries == 1) {
			std::cout << "1 carry operation.\n";
		} else {
			std::cout << carries << " carry operations.\n";
		}
	
		std::cin >> num1 >> num2;
	}
	
	return 0;
}
