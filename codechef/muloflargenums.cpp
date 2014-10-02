#include <iostream>

int main () {
	long long int n1;
	long long int n2;
	int arr[100];
	
	std::cin >> n1 >> n2;
	int index = 0;
	int digit = 0;
	
	while (n1 != 0) {
		digit = n1 % 10;
		arr[index++] = digit;
		n1 = n1 / 10;
	}

	int temp = 0;
	long long int x;

	for (int i = 0 ; i < index; i++) {
		x = arr[i] * n2 + temp;
		arr[i] = x % 10;
		temp = x / 10;
	}
	

	while (temp != 0) {
		arr[index++] = temp % 10;
		temp = temp / 10;
	}
	
	for (int i = index - 1 ; i >= 0; i--) {
		std::cout << arr[i];
	}
	
	return 0;
}
