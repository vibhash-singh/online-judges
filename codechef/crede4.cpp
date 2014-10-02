#include <iostream>
#include <list>
#include <string>
 
using namespace std;

int main() {
	int testCases;
	string num;
	char ch;
	int x;
	std::cin >> testCases;
	
	while (testCases--) {
		//std::cin >> ch;
	
		list<string> numList;
		std::cin >> x; 
		
		while (x--) {
			std::cin >> num;
			numList.push_back(num);
		}
		
		numList.sort();
		numList.reverse();
		
		 for (list<string>::iterator it = numList.begin(); it != numList.end(); ++it) {
			std::cout << *it;
		}
		
		std::cout << "\n";
	}
		
	return 0; 
}
