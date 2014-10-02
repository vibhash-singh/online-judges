#include <iostream>

const int mod = 10000009;

int numWays(std::string &s)
{
	int count = 1;
	int i = 0;
	
	for (i = 0; i < s.size() / 2; ++i)
	{
		if (s.at(i) == '?' && s.at(s.size() - i - 1) == '?')
		{
			count = (count * 26) % mod;
		}
		else if (s.at(i) == '?'|| s.at(s.size() - i - 1) == '?')
		{
			continue;
		}
		else if (s.at(i) != s.at(s.size() - i - 1))
		{
			return 0;
		}	
	}
	
	if ((s.size() & 1) && s.at(i) == '?')
		count = (count * 26) % mod;
		
	return count;
}

int main()
{
	int t;
	std::string s;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> s;
		std::cout << numWays(s) << std::endl;
	}
	
	return 0;
}
