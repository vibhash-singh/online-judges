#include <iostream>
#include <bitset>
#include <vector>

std::ostream& operator<<(std::ostream& os, const std::vector<int> &v)
{
	for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
	{
		std::cout << *it << " ";
	}
	
	std::cout << std::endl;
}

int main()
{
	int t, m, n, i;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n >> m;
		std::bitset<1000> b;
		b.reset();
		
		while (m--)
		{
			std::cin >> i;
			b.set(i - 1);
		}
		
		bool flip = true;
		std::vector<int> v1, v2;
		
		for (int i = 0; i < n; i++)
		{
			if (!b.test(i))
			{
				flip ? v1.push_back(i + 1) : v2.push_back(i + 1);
				flip = !flip;
			}
		}
		
		std::cout << v1 << v2;
	}
	
	return 0;
}


