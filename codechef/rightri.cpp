#include <iostream>
#include <cmath>

int main()
{
	int n, x1, y1, x2, y2, x3, y3, count = 0;
	std::cin >> n;
	
	while (n--)
	{
		std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		
		int a = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		int b = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
		int c = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);

		if (2 * std::max(a, std::max(b, c)) == a + b + c)
		{
			++count;
		}
	}
	
	std::cout << count << std::endl;
	return 0;
}
