#include <iostream>
#include <vector>

bool isValidTree(std::vector<int>& v)
{
	int leaf = 0, stem = 1;
	
	for (int i = 0; i < v.size(); ++i)
	{
		leaf = v.at(i);
		stem = stem - leaf;
		stem <<= 1;
		
		if (stem < 0)
		{
			return false;
		}
	}
	
	if (stem == 0)
		return true;
	
	return false;
}

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
		
		std::cout << (isValidTree(v) ? "Yes" : "No") << std::endl;
	}
	
	return 0;
}
