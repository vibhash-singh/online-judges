#include <iostream>

int main() {
	long long n, k, numQ, q;
	
	std::cin >> n >> k >> numQ;
	
	while (n != 0 || k != 0) {
		while (numQ--) {
			std::cin >> q;
			std::cout << (q * k) % n << " ";
		}
		
		std::cout << "\n";
	}

	return 0;
}
