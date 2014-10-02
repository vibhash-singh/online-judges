#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int t, n, c, x;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n >> c;
		std::vector<int> v;
		
		while (n--)
		{
			std::cin >> x;
			v.push_back(x);
		}
		
		std::accumulate(v.begin(), v.end(), 0) <= c ? std::cout << "Yes\n" : std::cout << "No\n";
	}
	
	return 0;
}
