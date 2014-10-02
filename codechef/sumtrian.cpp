#include <iostream>
#include <vector>
#include <algorithm>

int maxSum(std::vector<std::vector<int>> &v)
{
	for (std::vector<std::vector<int>>::iterator it = v.begin() + 1; it != v.end(); ++it)
	{
		std::vector<int> &v1 = *(it - 1);
		std::vector<int> &v2 = *it;
		
		for (int i = 0; i < v2.size(); ++i)
		{
			if (i == 0)
			{
				v2.at(i) += v1.at(i);
			}
			else if (i == v2.size() - 1)
			{
				v2.at(i) += v1.at(i - 1);
			}
			else
			{
				v2.at(i) += std::max(v1.at(i - 1), v1.at(i));
			}
		}
	}
	
	return *std::max_element(v.back().begin(), v.back().end()); 
}

int main()
{
	int t, n, tmp;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n;
		std::vector<std::vector<int>> v(n);
		
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < i + 1; ++j)
			{
				std::cin >> tmp;
				v.at(i).push_back(tmp);
			}
		}
		
		std::cout << maxSum(v) << std::endl;
	}
	
	return 0;
}
