#include <iostream>

int luckyLuckyNum(int n)
{	
	for (int y = 0; n - 4 * y >= 0; ++y)
	{
		if ((n - 4 * y) % 7 == 0)
		{
			return n - 4 * y;
		}
	}
	
	return -1;
}

int main()
{
	int t, n;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n;
		std::cout << luckyLuckyNum(n) << std::endl;
	}
	
	return 0;
}
