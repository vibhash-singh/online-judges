#include <iostream>

typedef long long LL;

int main()
{
	LL t, n;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n;
		std::cout << (n * ( n + 2 ) * ( 2 * n + 1))/8 << std::endl;
	}
	
	return 0;
}
