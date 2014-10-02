#include <iostream>

int numSetBits(int n)
{	
	int count = 0;	
	while (n)
	{
		n &= n - 1;
		++count;
	} 
	return count;
}

int maxShuffleAXorShuffleB(int n, int a, int b)
{
	int setBits = std::min(numSetBits(a), n - numSetBits(b)) + std::min(numSetBits(b), n - numSetBits(a));
	int retVal = 0;
	
	while (n--)
	{
		if (setBits == 0)
		{
			retVal <<= 1;
		}
		else
		{
			retVal = (retVal << 1) | 1;
			--setBits;
		}
	}
	
	return retVal;
}

int main()
{
	int t, n, a, b;
	std::cin >> t;
	
	while (t--)
	{
		std::cin >> n >> a >> b;
		std::cout << maxShuffleAXorShuffleB(n, a, b) << std::endl;
	}
	
	return 0;
}
