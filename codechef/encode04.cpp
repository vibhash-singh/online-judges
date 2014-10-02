#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

int main() {
	int testCases;
	long int d=0, t=0;
	std::string str;
	
	scanf("%ld", &testCases);
	
	while (testCases--) {
		std::cin >> str;
		long int length = str.length();
		
		if(length == 0 || (length % 2 != 0) ) {
			printf("NO\n");
		} else {		
			
			sort(str.begin(), str.end());
			long int pos = str.find_first_of("T");

			if (pos == length / 2) {
				printf("YES\n");
			} else {
				printf("NO\n");
			}		
		}
	}	
	
	return 0;
}	
