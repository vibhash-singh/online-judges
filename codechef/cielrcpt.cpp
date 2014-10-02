#include <iostream>

int minMenus(int n)
{
	int res = 0, mod = 0;
	
	if (n > 2048)
	{
		res = n / 2048;
		n = n % 2048;
	}
	
	while (n != 0)
	{
		res++;
		n &= n - 1;
	}
	
	return res;
}

int main()
{
	int t, n;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n;
		std::cout << minMenus(n) << std::endl;
	}
	
	return 0;
}
