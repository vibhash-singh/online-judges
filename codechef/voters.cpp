#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main()
{
	int n1, n2, n3, x;
	std::map<int, int> m;
	std::vector<int> v;
	
	std::cin >> n1 >> n2 >> n3;
	int n = n1 + n2 + n3;
	
	while (n--)
	{
		std::cin >> x;
		++m[x];
	}
	
	for (std::map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
	{
		if (it->second >= 2)
		{
			v.push_back(it->first);
		}
	}
	
	std::sort(v.begin(), v.end());
	
	std::cout << v.size() << std::endl;
	for (int i = 0; i < v.size(); ++i)
	{
		std::cout << v.at(i) << std::endl;
	}
		
	return 0;
}
