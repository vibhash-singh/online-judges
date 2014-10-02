#include <iostream>
#include <vector>
#include <cmath>
#include <string>

const int MAX = 3000001;
const int SQRT_MAX = ((int)sqrt(MAX)) + 1;
static std::vector<bool> v(MAX, false);

bool prime(int n)
{
	return n < v.size() && v.at(n);
}

void sieveOfAtkin()
{
	for (int x = 1; x < SQRT_MAX; x++) 
	{
		for (int y = 1; y < SQRT_MAX; y++) 
		{
			int k = 4 * x * x + y * y;
			
			if ((k < MAX) && ((k % 12 == 1) || (k % 12 == 5))) 
			{
				v.at(k) = !v.at(k);
			}
		
			k = 3 * x * x + y * y;
			
			if ((k < MAX) && (k % 12 == 7)) 
			{
				v.at(k) = !v.at(k);
			}
			
			if (x > y) 
			{
				k = 3 * x * x - y * y;
				
				if ((k < MAX) && (k % 12 == 11)) 
				{
					v.at(k) = !v.at(k);
				}
			}
		}
	}
	
	v.at(2) = true;
	v.at(3) = true;
	
	for (int n = 5; n <= SQRT_MAX; n++) 
	{
		if (v.at(n)) 
		{
			int n2 = n * n;
			
			for (int k = n2; k < MAX; k += n2) 
			{
				v.at(k) = false;
			}
		}
	}
}

bool palindrome(int n)
{
	std::string s = std::to_string(n);
	
	for (std::string::size_type i = 0; i < s.size() / 2; ++i)
	{
		if (s.at(i) != s.at(s.size() - i - 1))
			return false;
	}	
	
	return true;
}

int main()
{	
	sieveOfAtkin();
	
	int n;
	std::cin >> n;
	
	while (!(prime(n) && palindrome(n)))
		++n;
		
	std::cout << n;
	
	
	return 0;
}
	
