#include <iostream>
#include <stdlib.h>

long int calcMinCandies();

int main () {
	int testCases;
	std::cin >> testCases;
	
	while (testCases--) {
		std::cout << calcMinCandies() << "\n"; 
	}
	
	return 0;
}

long int calcMinCandies() {
	long int m=0, n=0, c = 1, ic = c, a1=0, a2=0, flag=1;
	std::cin >> n >> m;	
	n = n - 1;
	
	std::cin >> a1;
		
	while (--m) {
		std::cin >> a2;
		
		if (a2 > a1) {
			c = c + a2 - a1;
			n = n - (a2 - a1);
		} else if (a2 < a1) {
			c = c - (a1 - a2);
			n = n + (a1 - a2);
		} else {
			c  = c - 1;
		}
		
		if (c <= 0) {
			n = n - abs(c) - 1;
			ic = ic + abs(c) + 1;
			c = 1;
		}
		
		if (n <= 0) {
			flag=0;
		}
		
		a1 = a2;
	}
	
	if (flag == 0) {
		return -1;
	}
	
	return ic;
}
