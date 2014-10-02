#include <iostream>
#include <vector>

std::vector<int> longestIncreasingSubsequence(std::vector<int>& sequence)
{
	std::vector<std::vector<int> > solVec(sequence.size());
	solVec.at(0).push_back(sequence.at(0));
	
	for (int i = 1; i < sequence.size(); ++i)
	{
		int elem = sequence.at(i);
		int max = 0;
		int maxIndex = -1;
		
		for (int j = i - 1; j >= 0; --j)
		{
			std::vector<int> &v = solVec.at(j);
			
			if (v.back() < elem && v.size() > max)
			{ 
				max = v.size();
				maxIndex = j;
			}
		}
		
		if (maxIndex != -1)
		{
			solVec.at(i) = solVec.at(maxIndex);
		}
		
		solVec.at(i).push_back(elem);
	}
	
	int max = 0, maxIndex = 0, j = 0;
	
	for (std::vector<std::vector<int> >::iterator it = solVec.begin(); it != solVec.end(); ++it, ++j)
	{
		std::vector<int> &v = *it;
		
		if (v.size() > max)
		{
			max = v.size();
			maxIndex = j;
		}
	}
	
	return solVec.at(maxIndex);
}

int main()
{	
	std::vector<int> v;
	int size, num;
	
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		std::cin >> num;
		v.push_back(num);
	}
	
	std::vector<int> vec = longestIncreasingSubsequence(v);
	
	std::cout << vec.size() << std::endl;
	
	return 0;
}
