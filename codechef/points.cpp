#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

typedef std::pair<int, int> Point;

double distance(std::vector<Point>& vp)
{
	std::sort(vp.begin(), vp.end(), [](Point p1, Point p2) {return p1.first == p2.first ? p1.second > p2.second : p1.first < p2.first;});
	
	double d = 0;
	for (int i = 1; i < vp.size(); ++i)
	{
		Point p1 = vp.at(i - 1), p2 = vp.at(i);
		int x = p1.first - p2.first;
		int y = p1.second - p2.second;
		d += sqrt(x * x + y * y);
	}
	
	return d;
}

int main()
{
	int t, n;
	Point p;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n;
		std::vector<Point> vp;
		
		while (n--)
		{
			std::cin >> p.first >> p.second;
			vp.push_back(p);
		}
		
		std::cout << std::fixed << std::setprecision(2) << distance(vp) << std::endl;
	}
	
	return 0;
}
