#include <iostream>
#include <cmath>
#include <cstdio>

typedef long long LL;

static LL primes[] = {
2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151,
157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233,
239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317,
331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419,
421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503,
509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607,
613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701
};

static LL primeCount = sizeof(primes)/sizeof(*primes);


LL sumOfdivisors(LL n)
{
	if (n <= 1) 
		return 0;
		
	LL sum = 1, x = n;
	
	for (LL i = 0; i < primeCount; ++i)
	{
		LL m = 0;
		
		if (n == 1)
			break;
		
		if (n % primes[i] == 0)
		{
			while (n % primes[i] == 0)
			{
				++m;
				n /= primes[i];
			}
			
			sum *= ((LL)(pow(primes[i], m + 1) - 1)) / (primes[i] - 1);
		}
	}
	
	if (x == n)
	{
		return 1; //n is prime
	}
	else if (n == 1)
	{
		return sum - x;//subtract the number itself
	}
	else
	{
		return (sum * ((n * n - 1)/ (n - 1))) - x;//check for remaining prime
	}
}

int main()
{
	LL t, n;
	scanf("%lld", &t);
	
	while (t--)
	{
		scanf("%lld", &n);
		printf("%lld\n", sumOfdivisors(n));
	}
	
	return 0;
}

