#include <iostream>
#include <algorithm>

int main() {
	std::string strOne,strTwo;
	int testCases;
	std::cin >> testCases;
	
	while (testCases--) {
		std::cin >> strOne >> strTwo;
		
		sort(strOne.begin(), strOne.end());
		sort(strTwo.begin(), strTwo.end());
		
		if (strOne == strTwo) {
			std::cout << "YES\n";
		} else {
			std::cout << "NO\n";
		}
	}
	
	return 0;
}
