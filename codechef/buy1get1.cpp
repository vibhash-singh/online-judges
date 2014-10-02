#include <iostream>
#include <map>

int main()
{
	int t;
	std::cin >> t;
	
	while (t--)
	{
		std::string s;
		std::map<char, int> m;
		
		std::cin >> s;
		
		for (std::string::size_type i = 0; i < s.size(); ++i)
		{
			m[s.at(i)]++;
		}
		
		int sum = 0;
		
		for (std::map<char, int>::iterator it = m.begin(); it != m.end(); ++it)
		{
			sum += it->second & 1 ? it->second / 2 + 1 : it->second / 2; 
		}
		
		std::cout << sum << std::endl;
	}
	
	return 0;
}
