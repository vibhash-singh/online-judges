#include <iostream>
#include <cmath>
#include <limits>

int minFactorDiff(int n)
{
	int limit = sqrt(n);
	int minDiff = std::numeric_limits<int>::max();
	
	for (int i = 1; i <= limit; ++i)
	{
		if (n % i == 0)
		{
			if (minDiff > n / i - i)
			{
				minDiff = n / i - i;
			}
		}
	}
	
	return minDiff;
}

int main()
{
	int t, n;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n;
		std::cout << minFactorDiff(n) << std::endl;
	}
	
	return 0;
}
