#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int t, n;
	std::string s;
	std::cin >> t;

	while (t--)
	{
		std::cin >> n;
		std::cin >> s;
		std::string tmp(n, '0');
		
		for (int i = 0; i < s.size(); ++i)
		{
			if (s.at(i) == '1')
			{
				if (i - 1 >= 0)
					tmp.at(i - 1) = 'b';
		
				tmp.at(i) = 'b';
		
				if (i + 1 < s.size())
					tmp.at(i + 1) = 'b';
			}
		}
		
		std::cout << n - std::count(tmp.begin(), tmp.end(), 'b') << std::endl;
	}
	return 0;
} 
