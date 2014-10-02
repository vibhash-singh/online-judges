#include <iostream> 
#include <string>

using namespace std;

int main() {
	int testCases; 
	string str;
				
	std::cin >> testCases;
	
	while (testCases--) {
		std::cin >> str;
		int length = str.length();
		int sum = 0;
		
		for (int i = 0; i < length; i++) {
			sum = sum + str[i];
		}
		
		char ch = sum / length;
		std::cout << ch << "\n";
	}
	
	return 0;
}
