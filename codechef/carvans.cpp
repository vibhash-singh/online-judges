#include <iostream>
#include <vector>

int main()
{
	int t, n ,x;
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
		
		int count = 1;
		
		for (int i = 1; i < v.size(); ++i)
		{
			if (v.at(i) <= v.at(i - 1))
			{
				count++;
			}
			else
			{
				v.at(i) = v.at(i - 1);
			}
		}
		
		std::cout << count << std::endl;
	} 
	
	return 0;
}
