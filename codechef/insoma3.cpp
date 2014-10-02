#include <iostream>

int main() {
	int arr[100000];
	int n;
	
	scanf("%d", &n);
	
	for (int i = 0;i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	int disorderIndex = 0;
	int max = arr[0];
	
	for (int i = 1; i < n; i++) {
		if (arr[i] >= max) {
			max = arr[i];
		} else {
			for (int j = i - 1; j >=0; j--) {
				if (arr[i] < arr[j]) {
					disorderIndex++;
				}
			}
		}
	}
	
	printf("%d", disorderIndex);
	
	return 0;
}
