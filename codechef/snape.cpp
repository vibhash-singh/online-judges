#include <iostream>
#include <cmath>

int main()
{
	int t, b, ls;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> b >> ls;
		std::cout << sqrt(ls * ls - b * b) << " " << sqrt(ls * ls + b * b) << std::endl;
	}
	
	return 0;
}
