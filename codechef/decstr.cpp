#include <iostream>
#include <algorithm>

int main()
{
	std::string s = "zyxwvutsrqponmlkjihgfedcba";
	const int mod = 25;
	
	int t, k;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> k;
		std::string r;
		
		if (k % mod != 0)
			std::cout << s.substr(mod - (k % mod));
		
		k = k - (k % mod);
		
		while (k != 0)
		{
			std::cout << s;
			k = k - mod;
		}
	
		 std::cout << std::endl;
	}
	
	return 0;
}
