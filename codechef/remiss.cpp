#include <iostream>

int main()
{
	int t, a, b;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> a >> b;
		std::cout << std::max(a, b) << " " << a + b << std::endl;
	}


	return 0;
}
