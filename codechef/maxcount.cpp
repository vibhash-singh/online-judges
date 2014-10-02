#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <limits>

std::pair<int, int> maxCount(std::vector<int>& v)
{
	std::map<int, int> m;
	
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		if (m[*it] == 0)
		{
			m[*it] = std::count(v.begin(), v.end(), *it);
		}
	}
	
	std::pair<int, int> p(std::numeric_limits<int>::max(), std::numeric_limits<int>::min());
	
	for (std::map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
	{
		if ((it->second > p.second) || (it->second == p.second && it->first < p.first))
		{
			p.first = it->first;
			p.second = it->second;	
		}
	}
	
	return p;
}

int main()
{
	int t, n, tmp;
	std::cin >> t;
	
	while (t--)
	{
		std::vector<int> v;
		std::cin >> n;
		
		while (n--)
		{
			std::cin >> tmp;
			v.push_back(tmp);
		}
		
		std::pair<int, int> p = maxCount(v);
		std::cout << p.first << " " << p.second << std::endl;
	}

	return 0;
}
