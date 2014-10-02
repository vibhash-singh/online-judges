#include <iostream>

int main()
{
	int t, n, c, q, l , r;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n >> c >> q;
		
		while (q--)
		{
			std::cin >> l >> r;
			
			if (c >= l && c <= r)
			{
				c = l - (c - r);
			}
		}
		
		std::cout << c << std::endl;
	}
	
	return 0;
}
