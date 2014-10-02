//Prime Factorization for Numbers <= 10^9
#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>

typedef long long LL;

const LL MAX = 775150;
const LL SQRT_MAX = ((LL)sqrt(MAX)) + 1;
static std::bitset<MAX> v;

bool prime(LL n)
{
	return n < v.size() && v.test(n);
}

void sieveOfAtkin()
{
	for (LL x = 1; x < SQRT_MAX; x++) 
	{
		for (LL y = 1; y < SQRT_MAX; y++) 
		{
			LL k = 4 * x * x + y * y;
			
			if ((k < MAX) && ((k % 12 == 1) || (k % 12 == 5))) 
			{
				v.flip(k);
			}
		
			k = 3 * x * x + y * y;
			
			if ((k < MAX) && (k % 12 == 7)) 
			{
				v.flip(k);
			}
			
			if (x > y) 
			{
				k = 3 * x * x - y * y;
				
				if ((k < MAX) && (k % 12 == 11)) 
				{
					v.flip(k);
				}
			}
		}
	}
	
	v.set(2);
	v.set(3);
	
	for (LL n = 5; n <= SQRT_MAX; n++) 
	{
		if (v.test(n)) 
		{
			LL n2 = n * n;
			
			for (LL k = n2; k < MAX; k += n2) 
			{
				v.reset(k);
			}
		}
	}
}

std::vector<std::pair<LL, LL>> primeFactors(LL a)
{
	std::vector<std::pair<LL, LL>> vp;
	LL i = 2;
	
	while (a > 1 && i < MAX)
	{
		if (prime(i) && a % i == 0)
		{
			vp.push_back(std::make_pair(i, 0));
			
			while (a % i == 0)
			{
				vp.back().second++;
				a = a / i;
			}
		}
		
		++i;
	}
	
	if (i == MAX)
	{
		vp.push_back(std::make_pair(a, 1));
	}
	
	return vp;
}

int main()
{	
	sieveOfAtkin();
		
	LL n;
	std::cin >> n;
	std::vector<std::pair<LL, LL>> vp = primeFactors(n);

	for (LL i = 0; i < vp.size(); ++i)
	{
		std::cout << vp.at(i).first << " " << vp.at(i).second << std::endl;
	}
	
	return 0;
}


