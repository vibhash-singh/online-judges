#include <iostream>
#include <set>

int main()
{
	int t;
	std::string j, s;

	std::cin >> t;
	
	while (t--)
	{
		std::cin >> j >> s;
		std::set<char> cset(j.begin(), j.end());
		
		int count = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			if (cset.find(s.at(i)) != cset.end())
			{
				++count;
			}
		}
		
		std::cout << count << std::endl;
	}
	
	return 0;
}
