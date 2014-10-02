#include <iostream>
#include <algorithm>

void quickSort(int arr[], int left, int right);

int main() {
	int testCases = 10, num;
	int arrNum[10];
	
	while (testCases--) {
		int result = 0;
	
		for (int i = 0; i < 10; i++ ) {
			std::cin >> num;
			arrNum[i] = num % 42;
		}
		
		quickSort(arrNum, 0, 9);
		
		for (int i = 0; i < 9; i++ ) {
			result++;
		
			while(arrNum[i] == arrNum[i + 1] && i <= 8) {
				i++;
			}
			
			
		}
		
		if (arrNum[8] != arrNum[9]) {
			result++;
		}
		
		std::cout << result << "\n"; 
	}
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
