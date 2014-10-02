#include <iostream>
#include <vector>
#include <algorithm>

int nck(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else
	{
		return nck(n, (k - 1))  * (n - k + 1) / k;
	}
}

int main()
{
	int t, k, x;
	std::cin >> t;
	
	while (t--)
	{
		std::vector<int> v(11);
		
		for (int i = 0; i < 11; ++i)
		{
			std::cin >> v.at(i);
		}
		
		std::cin >> k;
		std::sort(v.begin(), v.end());
		
		int key = v.at(v.size() - k);
		int nKey = std::count(v.begin(), v.end(), key);
		int kKey = std::count(v.begin() + v.size() - k, v.end(), key);
		
		std::cout << nck(nKey, kKey) << std::endl;
	}
	
	return 0;
}
