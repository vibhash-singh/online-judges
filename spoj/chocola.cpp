#include <iostream>
#include <vector>
#include <algorithm>

int calcMinCost(std::vector<int> vx, std::vector<int> vy, int sum)
{
	if ( vx.size() == 0)
	{
		return sum + std::accumulate(vy.begin(), vy.end(), 0);
	}
	else if (vy.size() == 0)
	{
		return sum + std::accumulate(vx.begin(), vx.end(), 0);
	}
	else
	{
		std::vector<int>::iterator itx = std::max_element(vx.begin(), vx.end());
		std::vector<int>::iterator ity = std::max_element(vy.begin(), vy.end());
		
		if (*itx > *ity)
		{	
				return calcMinCost(std::vector<int>(vx.begin(), itx), vy, sum + *itx) + 
					   calcMinCost(std::vector<int>(itx + 1, vx.end()), vy, sum + *itx);
		}
		else
		{	
				return calcMinCost(vx, std::vector<int>(vy.begin(), ity), sum + *ity) + 
					   calcMinCost(vx, std::vector<int>(ity + 1, vy.end()), sum + *ity);	
		}	
	}
}

int main()
{
	int t, m , n, x;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> m >> n;
		m -= 1; n -= 1;
		std::vector<int> vx(1, 0), vy(1, 0);
		
		while (m--)
		{
			std::cin >> x;
			vx.push_back(x);
		}
		
		while (n--)
		{
			std::cin >> x;
			vy.push_back(x);
		}
		
		vx.push_back(0);
		vy.push_back(0);
		
		std::cout << calcMinCost(vx, vy, 0) << std::endl;
	}
	
	return 0;
}
