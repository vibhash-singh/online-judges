#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int t, n, x, k;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n;
		std::vector<int> v(n);
		
		for (int i = 0; i < n; ++i)
		{
			std::cin >> v.at(i);
		}
		
		std::cin >> k;
		int key = v.at(k - 1);
		int count = std::count_if(v.begin(), v.end(), [&key] (int val) {return val < key;});
		std::cout << count + 1 << std::endl;
	}
	
	return 0;
}
