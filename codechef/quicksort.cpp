#include <stdio.h>

void quickSort(int arr[], int left, int right);

int main() {

	int a[1000000];
	int limit = 0;
	
	scanf("%d", &limit);
	
	for (int i = 0; i < limit; i++) {
		scanf("%d", &a[i]);
	}
	
	quickSort(a, 0, limit - 1);
	
	for (int i = 0; i < limit; i++) {
		printf("%d\n", a[i]);
	}
	
	return 0;
}

void quickSort(int arr[], int left, int right) {
	int i = left, j = right;
	int temp;
	int pivot = arr[(left + right) / 2];
	
	while (i <= j) {
		while (arr[i] < pivot) {
			i++;
		}
		
		while (arr[j] > pivot) {
			j--;
		}
		
		if (i <= j) {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}
	
	if (left < j) {
		quickSort(arr, left, j);
	}
	
	if (right > i) {
		quickSort(arr, i, right);
	}
}
