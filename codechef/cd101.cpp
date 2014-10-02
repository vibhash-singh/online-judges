#include <iostream>

int main() {
	int l , m , n;

	std::cin >> l >> m >> n;
	
	if (m - l > n - m) {
		std::cout << m - l - 1;
	} else {
		std::cout << n - m - 1;
	}
	return 0;
}
