#include <iostream>
#include <limits>

std::string solve(int *c)
{
	int min = std::numeric_limits<int>::max();
	int minIndex = std::numeric_limits<int>::max();
	int min2 = std::numeric_limits<int>::max();
	int minIndex2 = std::numeric_limits<int>::max();
	std::string s = "";
	
	for (int i = 1; i < 10; ++i)
	{
		if (c[i] < min)
		{
			min = c[i];
			minIndex = i;
		}
	}
	
	//std::cout << min << " " << minIndex << " ";
	
	if (min > c[0])
	{
		s = "1"+ std::string(c[0] + 1, '0');
	}
	else
	{
		s = std::string(c[minIndex] + 1, minIndex + '0');
	}
	
	return s;
}


int main() 
{
	int testCases;
	int candles[10];
	
	std::cin >> testCases;
	
	while (testCases--) 
	{
		for (int i = 0; i < 10; i++) 
		{
			std::cin >> candles[i];
		}	
		
		std::cout << solve(candles) << std::endl;
	}
	
	return 0;
}
