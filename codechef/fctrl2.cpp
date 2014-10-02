#include <iostream>

void findFactorial(int num);
void multiply(int *arr, int *totalDigits, int num);

int main() {

	int testCases = 0;
	int num = 0;
	
	std::cin >> testCases;
	
	while (testCases--) {
		std::cin >> num;
		findFactorial(num);
		std::cout << std::endl;
	}
	
	return 0;
}

void findFactorial(int num) {
	int arrDigits[200];
	arrDigits[0] = 1;
	int x = 1;
	int *totalDigits = &x;
	
	for (int n = 2; n <= num; n++) {
		multiply(arrDigits, totalDigits, n);
	}
	
	for (int i = *totalDigits - 1; i >= 0; i--) {
		std::cout << arrDigits[i];
	}
}

void multiply(int *arr, int *totalDigits, int num) {
	long int currentResult = 0;
	int temp = 0;
	
	for (int index = 0; index < *totalDigits; index++) {
		currentResult = arr[index] * num + temp;
		arr[index] = currentResult % 10;
		temp = currentResult / 10;
	}
	
	if (temp != 0) {
	
		while (temp != 0) {
			arr[(*totalDigits)++] = temp % 10;
			temp = temp / 10;
		}
	}
}
