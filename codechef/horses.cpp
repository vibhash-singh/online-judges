#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

int main()
{
	int t, n, x;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n;
		std::vector<int> v;
		
		while (n--)
		{
			std::cin >> x;
			v.push_back(x);
		}
		
		std::sort(v.begin(), v.end());
		int minDiff = std::numeric_limits<int>::max();
		
		
		for (int i = 1; i < v.size(); ++i)
		{
			if (minDiff > v.at(i) - v.at(i - 1))
			{
				minDiff = v.at(i) - v.at(i - 1);
			}
		}
		
		std::cout << minDiff << std::endl;
	}
	
	return 0;
}

