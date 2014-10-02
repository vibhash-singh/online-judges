#include <iostream>

int main()
{
	int totalTestCases = 0;
	int num = 0;
	
	std::cin >> totalTestCases;
	
	for (int testCase = 1; testCase <= totalTestCases; testCase++) 
	{
		std::cin >> num;
		num & 1 ? std::cout << "BOB\n" : std::cout << "ALICE\n";
	}
	return 0;
}

