#include <iostream>

const int mod = 1000000007;

int cheflr(std::string &s)
{
	int res = 1;
	int level = 1;
	
	for (std::string::size_type i = 0; i < s.size(); ++i)
	{
		level++;
		
		if (s.at(i) == 'l')
		{
			res = (level % 2 == 0 ? res * 2 : res * 2 - 1) % mod; 
		}
		else
		{
			res = (level % 2 == 0 ? res * 2 + 2 : res * 2 + 1) % mod; 
		}
	}
	
	return res;
}

int main()
{
	int t;
	std::cin >> t;
	
	while (t--)
	{
		std::string s;
		std::cin >> s;
		
		std::cout << cheflr(s) << std::endl;
		
	}
	
	return 0;
}
