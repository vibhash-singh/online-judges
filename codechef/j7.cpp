#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

int main()
{
	int t;
	double p, s;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> p >> s;
		
		double d = sqrt(p * p - 24 * s);
		double v1 = pow((p - d) / 12, 2) * ((p + 2 * d) / 12);
		double v2 = pow((p + d) / 12, 2) * ((p - 2 * d) / 12);

		//std::cout << std::setprecision(3) << std::max(v1, v2);
		printf("%.2lf\n", std::max(v1, v2));
	}
	
	return 0;
}
