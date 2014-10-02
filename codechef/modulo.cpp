#include <stdio.h>

int main() {
	long t ,k, n;
	long int generations = 0;
	

	scanf("%ld", &t);
	
	while (t--) {
		scanf("%ld%ld", &n, &k);
	
		long i = n - 1;
		long long facn = n;
		
		while (i >= 1) {
			if (facn == 1) {
				break;
			}
			
			if(facn % k == 0) {
				facn = facn / k;
				generations++;					
			} else {
				facn = facn * i;
				i--;
			}
		}

		printf("%ld\n", generations);
	}
	
}
