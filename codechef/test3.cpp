#include <stdio.h>
#include <stdlib.h>

int main () {
	int testCases;
	long int m=0, n=0, c = 1, ic = c, a1=0, a2=0, flag=1,in=0;
	scanf("%d", &testCases);
	
	while (testCases--) {
		m=0;
		n=0;
		c=1;
		ic=c;
		a1=0;
		a2=0;
		flag=1;
		scanf("%ld%ld",&n,&m);
		in=n;		
		n = n - 1;
		scanf("%ld",&a1);
		
		while (--m) {
			scanf("%ld",&a2);
			
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
		
		if (flag==0) {
			printf("-1\n");
		}
		else {
			printf("%ld\n", ic); 
		}
		
	}
	
	return 0;
}
