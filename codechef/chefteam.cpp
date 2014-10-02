#include <stdio.h>

unsigned long long factorial(unsigned long long num);

unsigned long long calcNoOfWays(unsigned long long n, unsigned long long k)
{
	unsigned long long r = n - k;
	unsigned long long numerator = 1;
	unsigned long long biggerNum = k;
	unsigned long long smallerNum = r;
	
	if (k < r) {
		biggerNum = r;
		smallerNum = k;
	}
	
	for (unsigned long long i = n; i > biggerNum; i-- ) {
		numerator = numerator * i;
	}
	
	return numerator / factorial(smallerNum);
}

unsigned long long factorial(unsigned long long num)
{
	/*if (num == 1 || num == 0) {
		return 1;
	}
	
	return num * factorial(num - 1);*/
	
	unsigned long long result = 1;
	
	if (num == 1 || num == 0) {
		return 1;
	}
	
	for (unsigned long long i = 2; i <= num; i++) {
		result = result * i;
	}
}

int main()
{
	int totalTestCases;
	unsigned long long n, k;
	
	scanf("%d", &totalTestCases);
	
	while (totalTestCases--) {
		scanf("%llu", &n);
		scanf("%llu", &k);
		printf("%llu\n", calcNoOfWays(n, k));
	}
	
	return 0;
}
