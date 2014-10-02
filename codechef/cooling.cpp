#include <iostream>
#include <vector>
#include <algorithm>

int calcMaxPies(std::vector<int> &v1, std::vector<int> &v2)
{
	std::sort(v1.begin(), v1.end());
	std::sort(v2.begin(), v2.end());
	
	int i = 0, j = 0, count = 0;
	
	while (i < v1.size() && j < v2.size())
	{
		if (v1.at(i) > v2.at(j))
		{
			j++;
			continue;
		}
		
		count++;
		i++;
		j++;
	}
	
	return count;
}

int main()
{
	int t, n;
	
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n;
		std::vector<int> v1(n), v2(n);
		
		for (int i = 0; i < n; ++i)
		{
			std::cin >> v1.at(i);
		}
		
		for (int i = 0; i < n; ++i)
		{
			std::cin >> v2.at(i);
		}
		
		std::cout << calcMaxPies(v1, v2) << std::endl;
	}
	
	return 0;
}
