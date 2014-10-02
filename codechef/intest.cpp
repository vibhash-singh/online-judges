#include <stdio.h>

int main() 
{
	int n , k;
	int totalResults = 0;
	
	scanf("%d%d", &n,&k);
	int num[n];
	
	for (int i = 0; i < n; i++  ) {
		scanf("%d", &num[i]);
	}
		
	for (int i = 0; i < n; i++  ) {
		if(num[i] % k == 0) {
			totalResults++;
		}
	}
	
	printf("%d", totalResults);
	
	return 0;
}



