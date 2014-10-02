#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

int main()
{
	int m, n, d, tmp, countC = 0, countA = 0, net = 0;
	char q;

	std::cin >> n >> m;
	
	std::vector<int> v;
	
	while (n--)
	{
		std::cin >> tmp;
		v.push_back(tmp);
	}
	
	while (m--)
	{
		std::cin >> q >> d;
		
		switch (q)
		{
			case 'R':
				if (countC > countA)
				{
					net = countC - countA;
					std::cout << v.at((d - 1 + net) % v.size()) << std::endl;
				}
				else
				{	
					net = countA - countC;
					std::cout << v.at((d - 1 + v.size() - net) % v.size()) << std::endl;
				}
			break;
			
			case 'C':
				countC += d;
				countC = countC % v.size();
			break;
			
			case 'A':
				countA += d;
				countA = countA % v.size();
			break;
		}
	}
	
	return 0;
}
