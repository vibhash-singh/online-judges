#include <iostream>

int main()
{
	int t, n;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n;
		std::cout << n / 2 + 1 << std::endl;
	}
	
	return 0;
}
