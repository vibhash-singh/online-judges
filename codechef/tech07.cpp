#include <iostream>

int main() {
	int testCases;
	std::cin >> testCases;
	
	int n;
	long int result;
	
	while (testCases--) {
		std::cin >> n;
		
		if (n > 2) {
			result = ((4 * n * (4*n -1) * (4*n - 2)) / 6) - ((4 * n * (n - 1) * (n - 2)) / 6);
		} else {
			result = (4 * n * (4*n -1) * (4*n - 2)) / 6;
		}
		
		std::cout << result << "\n";
	}
	
	return 0;
}
