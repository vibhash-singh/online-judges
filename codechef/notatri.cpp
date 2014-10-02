#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n;
	std::cin >> n;
	
	while (n)
	{
		std::vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			std::cin >> v[i];
		}
		
		std::sort(v.begin(), v.end());
		int count = 0;
		
		for (int k = n - 1; k >= 0; --k)
		{
			int i = 0, j = k - 1;
			
			while (i < j)
			{
				if (v[i] + v[j] >= v[k])
				{
					--j;
				}
				else
				{
					count += j - i;
					++i;
				}
			}
		}
		
		std::cout << count << std::endl;
		std::cin >> n;
	}
	
	return 0;
}
