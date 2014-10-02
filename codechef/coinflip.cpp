#include <iostream>

int main()
{
	int t, g, i, n , q, r;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> g;
		
		while (g--)
		{
			std::cin >> i >> n >> q;			
			std::cout << (i == q ? n / 2 : n - n / 2) <<std::endl; 
		}
	}
	
	return 0;
}
