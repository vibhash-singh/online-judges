#include <stdio.h>

int main () {
	int l1, l2;
	char gs1[75];
	char gs2[75];

	scanf("%d%d", &l1, &l2);
	scanf("%s%s", gs1, gs2);

	int maxLength = 0;
	int length = 0;
	
	for (int i = 0; i < l1 ; i++) {
		
		
		for (int j = 0; j < l2 ; j++) {
			int tempi = i;
			int tempj = j; 
		
			if (gs1[tempi] == gs2[tempj]) {
				while ((gs1[tempi] == gs2[tempj]) && tempi < l1 && tempj < l2) {
					//printf("%c%c\n", gs1[tempi],gs2[tempj]);
					length++;
					tempi++;
					tempj++;
				}
				
				//printf("\n");
				
				if (length > maxLength) {
					maxLength = length;
				}
			}
					
			length = 0;	
		}
	}
	
	printf("%d", maxLength);
	
	return 0;
}

