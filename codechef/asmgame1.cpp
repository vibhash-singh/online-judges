#include <iostream>
#include <vector>

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	int t, n, x;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n;
		std::vector<int> v;
		
		while (n--)
		{
			std::cin >> x;
			v.push_back(x);
		}
		
		int res = v.at(0);
		
		for (int i = 1; i < v.size(); ++i)
		{
			res = gcd(res, v.at(i));
		}
	
		std::cout << res << std::endl;
	}
	
	return 0;
}


