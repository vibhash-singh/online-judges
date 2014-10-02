#include <iostream>
#include <vector>

int inversions(const std::vector<int> &v)
{
	int count = 0;
	for (int i = 0; i < v.size(); ++i)
		for (int j = i + 1; j < v.size(); ++j)
			if (v.at(i) > v.at(j))
				++count;

	return count;
}

int localInversions(const std::vector<int> &v)
{
	int count = 0;
	for (int i = 1; i < v.size(); ++i)
		if (v.at(i - 1) > v.at(i))
			++count;
	
	return count;
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
		std::cout << (inversions(v) == localInversions(v) ? "YES" : "NO") << std::endl;
	}
	
	return 0;
}
