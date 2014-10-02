#include <iostream>
#include <math.h>

unsigned long reverseNum(unsigned long num);

int main() {
	int testCases;
	unsigned long a, b;
	unsigned long sum;
	
	std::cin >> testCases;
	
	while (testCases--) {
		std::cin >> a >> b;
		sum = reverseNum(a) + reverseNum(b);
		
		while (sum % 10 == 0) {
			sum = sum / 10;
		}
		
		std::cout << sum << "\n";
	}
	
	return 0;
}

unsigned long reverseNum(unsigned long num) {
	int arrDigits[20];
	unsigned long temp = num;
	int index = 0;
	int reverseNum = 0;
	
	if (num == 0) {
		return 0;
	}
	
	while (temp % 10 == 0) {
		temp = temp / 10;
	}

	while (temp != 0) {
		arrDigits[index++] = temp % 10;
		temp = temp / 10;
	}

	for (int i = index - 1; i >=0; i--) {
		reverseNum = arrDigits[i] * (int)pow(10, (index - 1 - i)) + reverseNum;
	}	
	
	return reverseNum;
}
