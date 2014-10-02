#include <iostream>
#include <algorithm>

bool luckystr(std::string& s)
{
	std::all_of(s.begin(), s.end(), [](char c) {return c == '4' || c == '7';});
}

bool goodStr(std::vector<std::string> &vs1, std::string &s)
{
	if (!luckystr(s))
	{
		return false;
	}
	
	if (s.size() >= 47)
	{
		return true;
	}
		
	return std::any_of(vs1.begin(), vs1.end(), [&s](std::string &str) {return s.find(str) != std::string::npos;});
}

int main()
{
	int k, n;
	std::string s;
	std::vector<std::string> vs1, vs2;
	
	std::cin >> k >> n;
	
	while (k--)
	{
		std::cin >> s;
		vs1.push_back(s);
	}
	 
	while (n--)
	{
		std::cin >> s;
		vs2.push_back(s);
	}
	
	for (int i = 0; i < vs2.size(); ++i)
	{
		std::cout << (goodStr(vs1, vs2.at(i)) ? "Good" : "Bad") << std::endl;
	}

	return 0;	
}
