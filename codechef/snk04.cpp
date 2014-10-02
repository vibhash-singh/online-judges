#include <iostream>

unsigned int calcTotalRationalNumbers(unsigned int num);
inline bool isCoprime(int x,int y);

int main()
{
	int totalTestCases = 0;
	unsigned int number;
	
	std::cin >> totalTestCases;
	
	for (int testCase = 1; testCase <= totalTestCases; testCase++) {
		std::cin >> number; 
		std::cout << calcTotalRationalNumbers(number) << "\n";
	}
	
	return 0;
}

unsigned int calcTotalRationalNumbers(unsigned int num)
{
	unsigned int totalResults = 0;

	for (int p = 1; p < num; p++) {
		for (int q = p + 1; q <= num; q++) {
			if(isCoprime(p, q)) {
				totalResults++;
			}
		}
	}
	
	return totalResults;
}

inline bool isCoprime(int x,int y)
{
	unsigned int limit = x / 2;
	
	for(int i = 2; i <= limit; i++) {
		if( i % x == 0 && i % y == 0) {
			return false;
		}
	}
	
	return true;
}
