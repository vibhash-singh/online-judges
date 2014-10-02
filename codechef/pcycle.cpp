#include <iostream>
#include <vector>

std::ostream& operator<<(std::ostream& os, std::vector<std::vector<int>> &v)
{
	for (std::vector<std::vector<int>>::iterator it = v.begin(); it != v.end(); ++it)
	{
		std::vector<int> &tmpVec = *it;
		
		for (std::vector<int>::iterator tmpIt = tmpVec.begin(); tmpIt != tmpVec.end(); ++tmpIt)
		{
			std::cout << *tmpIt << " ";
		}
		
		std::cout << std::endl;
	}
	
	return os;
}

int main() 
{
	int n, x;
	std::vector<int> v;
	std::cin >> n;
	std::vector<bool> visited(n + 1, false);
	v.push_back(0);
	std::vector<std::vector<int>> res;
	
	while (n--)
	{
		std::cin >> x;
		v.push_back(x);
	}
	
	for (int i = 1; i < v.size(); ++i)
	{
		if (!visited.at(i))
		{
			int curr = i;
			std::vector<int> tmp;
			
			while (!visited.at(curr))
			{
				visited.at(curr) = true;
				//std::cout << curr << " ";
				tmp.push_back(curr);
				curr = v.at(curr);
			}
			
			//std::cout << curr;
			tmp.push_back(curr);
			res.push_back(tmp);
			//std::cout << std::endl;
		}
	}
	
	std::cout << res.size() << std::endl;
	std::cout << res;
	
	return 0;
}
