#include <iostream>
#include <cstring>

int main()
{
	int t, i;
	char s[100];
	std::cin >> t;
	
	for (int j = 1; j <= t; ++j)
	{
		std::cin >> i;
		memset(s, '\0', 100);

		std::cin >> s;
		s[i - 1] = '\0';
		
		std::cout << j << " " << s << &s[i] << std::endl;
	}
	
	
	
	return 0;
}
