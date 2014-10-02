#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int t, n, x;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n;
		std::vector<int> va(1001, 0), vd(1001 , 0);
		
		for (int i = 0; i < n; ++i)
		{
			std::cin >> x;
			++va.at(x);
		}
		
		for (int i = 0; i < n; ++i)
		{
			std::cin >> x;
			++vd.at(x);
		}
		
		int max = 0, count = 0;
		for (int i = 0; i < 1001; ++i)
			if (va.at(i) != vd.at(i))
			{
				if (va.at(i))
				{
					count += va.at(i);
					max = max < count ? count : max; 
				}
				
				if(vd.at(i))
				{
					count -= vd.at(i);
				}
			}
		
		std::cout << max << std::endl;
	}
	
	return 0;
}
