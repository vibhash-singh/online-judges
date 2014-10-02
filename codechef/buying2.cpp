#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int t, n, x, m;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n >> x;
		std::vector<int> v;
		
		while (n--)
		{
			std::cin >> m;
			v.push_back(m);
		}
		
		int sum = std::accumulate(v.begin(), v.end(), 0);
		int max = sum / x;
		
		for (int i = 0; i < v.size(); ++i)
		{
			if ((sum - v.at(i))/ x == max)
			{
				max = -1;
				break;
			}
		}
		
		std::cout << max << std::endl;
	}
	
	return 0;
}
