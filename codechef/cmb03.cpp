#include <iostream>
#include <string>

int main() {
	int testCases;
	std::cin >> testCases;
	
	std::string s1, s2;
	
	while (testCases--) {
		std::cin >> s1 >> s2;
		
		if (s1.find(s2) != std::string::npos) {
			std::cout << "1\n";
		} else {
			std::cout << "0\n";
		} 
	}

	return 0;
}
