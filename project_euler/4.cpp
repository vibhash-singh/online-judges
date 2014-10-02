#include <iostream>
#include <sstream>

bool isPalindrome(const std::string &str)
{
	std::string::size_type start = 0, last = str.length() - 1;
	
	while (start < last)
	{
		if (str[start] != str[last])
			return false;
		++start;
		--last;
	}
	
	return true;
}

int main()
{
	const int max3digitprod = 999 * 999;
	int num = max3digitprod;
	
	std::string str;
	
	while (num--)
	{
		std::stringstream ss;
		ss << num;
		str = ss.str();
		
		if (isPalindrome(str))
		{
			std::cout << num;
			break;
		}
	}
	
	return 0;
}
