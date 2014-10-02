#include <iostream>
#include <math.h>

unsigned long Z(unsigned long);

int main()
{
	int totalTestCases = 0;
	unsigned long num = 0;
	
	std::cin >> totalTestCases;
	
	for (int testCase = 1; testCase <= totalTestCases; testCase++) {
		std::cin >> num;
		std::cout << Z(num) << "\n";
	}
	
	return 0;
}

unsigned long Z(unsigned long n)
{
	int i = 5;
	int result = 0;
	
	while(i <= n) {
		result = result + (n / i);
		i = i * 5;
	}
	
	return result;
}
