#include <iostream>
#include <stdio.h>

int main() {
	int n, m;
	int fields = 0;
	char ch;
	
	scanf("%d%d", &n,&m);
	ch = getchar();
	
	while (n != 0 || m != 0) {
		fields++;
		char str[100][100];
		int grid[100][100] = {0};
		
		for (int i = 0; i < n; i++) {
			scanf("%s", str[i]);
		}
				
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (str[i][j] == '*') {
					grid[i][j] = -1;
					
					if (grid[i - 1][j - 1] != -1 && i-1 >=0 && j-1>=0) grid[i - 1][j - 1]++;
					if (grid[i - 1][j] != -1 && i-1 >= 0) grid[i - 1][j]++;
					if (grid[i - 1][j + 1] != -1 && i-1 >=0 && j+1<m) grid[i - 1][j + 1]++;
					if (grid[i][j - 1] != -1 && j-1>=0) grid[i][j - 1]++;
					if (grid[i][j + 1] != -1 && j+1<m) grid[i][j + 1]++;
					if (grid[i + 1][j - 1] != -1 && i+1<n && j-1>=0) grid[i + 1][j - 1]++;
					if (grid[i + 1][j] != -1 && i+1<n ) grid[i + 1][j]++;
					if (grid[i + 1][j + 1] != -1 && i+1<n && j+1<m) grid[i + 1][j + 1]++;
				}
			}
		}
		
		printf("Field #%d:\n", fields);
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if(grid[i][j] == -1) {
					printf("*");
				} else {
					printf("%d", grid[i][j]);
				}
			}
			
			printf("\n");
		}
		
		printf("\n");
		scanf("%d%d", &n,&m);
		//if(m!=0 || n!= 0) printf("\n");
	}
		
	return 0;
}

