#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char strIp[15];
	int a, b, c, d, e;
	
	while(!feof(stdin)) {
		scanf("%s", strIp);
		a = atoi(strtok(strIp, "."));
		b = atoi(strtok(NULL, "."));
		c = atoi(strtok(NULL, "."));
		d = atoi(strtok(NULL, "."));

		if (a>=1 && a<=255 && b<=255 && c<=255 && d<=255 && b>=0 && c>= 0 && d>=0) {
			if (a >= 1 && a <=127) {
				printf("Class A\n");
			} else if (a >= 128 && a <= 191) {
				printf("Class B\n");
			} else if (a >= 192 && a <= 223) {
				printf("Class C\n");
			} else if (a >= 224 && a <= 239) {
				printf("Class D\n");
			} else {
				if (d == 255) {
					printf("InValid\n");
				} else {
					printf("Class E\n");
				}	
			}
		} else {
			printf("Invalid\n");
		}
	}
	//printf("%d %d %d %d\n", a, b, c, d);
	
	return 0;
}
