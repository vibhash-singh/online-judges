#include <stdio.h>

int main() {
	long testCases, n, s; 
	scanf("%ld", &testCases);
	
	while (testCases--) {
		scanf("%ld", &n);
		
		if (n % 2 == 0) {
			printf("%ld\n", (n / 2) * (n/2)); 
		} else {
			printf("%ld\n", ((n + 1) / 2) * ((n - 1) / 2));
		}
	}
	
	return 0;
}	
