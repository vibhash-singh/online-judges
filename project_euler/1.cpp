#include <iostream>

int main()
{
	int sum = 0;
	
	for (int num = 1; num <= 999; ++num)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
	}
	
	std::cout << sum;
	
	return 0;
}
