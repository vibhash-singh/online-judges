#include <iostream>

long int gcd(long int a,long int b);

int main() {
	long testCases, n;
	scanf("%ld", &testCases);
		
	while (testCases--) {
		scanf("%ld", &n);
		
		long int count = 1 + n;
		
		for (long int i = 2; i < n; i++) {
			for (long int j = i + 1; j <= n; j++) {
				//if (j % i != 0 || (i % 2 != 0 && j % 2 != 0) ) {
					if (gcd(i, j) == 1) {
						count++;
						//printf("%ld|%ld\n", i , j);
					}
				//}
			}
		}
		
		printf("%ld\n", count);
	}

	return 0;
}

long int gcd(long int a,long int b) {
	if (a == 0)
       return b;
    while (b != 0) {
        if (a > b)
           a = a - b;
        else
           b = b - a;
		}   
    return a;

}	   

