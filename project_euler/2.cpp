#include <iostream>

int main()
{
	long long int a1 = 1, a2 = 2;
	long long int curr = a2, prev = a1, next = a2;
	long long int sum = a2;
	
	while (curr <= 4000000)
	{
		next = prev + curr;
		prev = curr;
		curr = next;
		
		if (curr % 2 == 0)
			sum += curr;
	}
	
	std::cout << sum;
	
	return 0;
}
