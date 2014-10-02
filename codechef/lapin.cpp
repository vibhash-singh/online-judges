#include <iostream>
#include <algorithm>

bool lapindrome(std::string s)
{
	std::string s1 = s.substr(0, s.size() / 2);
	std::string s2 = s.size() % 2 == 0 ? s.substr(s.size() / 2) : s.substr(s.size() / 2 + 1);
	std::sort(s1.begin(), s1.end());
	std::sort(s2.begin(), s2.end());
	
	return s1 == s2; 
}

int main()
{
	int t;
	std::string s;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> s;
		std::cout << (lapindrome(s) ? "YES" : "NO") << std::endl;
	}
	
	return 0;
}
