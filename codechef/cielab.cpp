#include <iostream>

int main()
{
	int a , b, r;
	std::cin >> a >> b;
	
	r = (a - b) % 10;
	r != 9 ? std::cout << (a - b + 1) : std::cout << (a - b - 1);
	
	return 0;
}
