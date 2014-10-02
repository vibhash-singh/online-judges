#include <iostream>
#include <cmath>

typedef struct 
{
	int x, y;
} Point;

inline double distance(Point p1, Point p2)
{
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main()
{
	int t, r, x, y;
	Point p1, p2, p3;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> r;
		std::cin >> p1.x >> p1.y;
		std::cin >> p2.x >> p2.y;
		std::cin >> p3.x >> p3.y;
		
		double a = distance(p1, p2);
		double b = distance(p2, p3);
		double c = distance(p3, p1);
		
		std::cout << ((a <= r && b <= r) ||
		              (b <= r && c <= r) ||
		              (c <= r && a <= r) ? "yes" : "no");
		std::cout << std::endl;
	}
	
	return 0;
}
