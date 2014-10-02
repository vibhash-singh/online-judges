#include <iostream>

typedef long long LL;

LL sumOfdivisors(LL n)
{
	if (n == 1) 
		return 0;
		
	LL sum = 1;
	LL i = 0;
	
	for (i = 2; i * i < n; ++i)
	{
		if (n % i == 0)
		{
			sum += i + n / i;
		}
	}
	
	if (i * i == n)
	{
		sum += i;
	}
	
	return sum;
}

int main()
{
	LL t, n;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n;
		std::cout << sumOfdivisors(n) << std::endl;
	}
	
	return 0;
}
