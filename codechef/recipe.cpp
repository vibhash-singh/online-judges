#include <iostream>
#include <vector>

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b , a % b); 	
}

int maxCommonFactor(const std::vector<int> &v)
{
	int cf = v.at(0);
	
	for (std::vector<int>::size_type i = 1; i < v.size(); ++i)
	{
		cf = gcd(cf, v.at(i));
	}
	
	return cf;
} 

int main()
{
	int t, n, x;
	std::cin >> t;
	
	while (t--)
	{
		std::vector<int> v;
		std::cin >> n;
		
		while (n--)
		{
			std::cin >> x;
			v.push_back(x);
		}
		
		int mcf = maxCommonFactor(v);
		
		for (std::vector<int>::size_type i = 0; i < v.size(); ++i)
		{
			std::cout << v.at(i) / mcf << " ";
		}
		
		std::cout << std::endl;
	}
	
	return 0;
}
