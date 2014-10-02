#include <iostream>
#include <math.h>

int findMax(int arr[], int n);
int findMin(int arr[], int n);

int main() {
	int testCases;
	int n;
	int arr[3000];
	
	std::cin >> testCases;
	
	while (testCases--) {
		std::cin >> n;
		int numTransfers = 0;   
		
		for (int i = 0; i < n; i++) {
			std::cin >> arr[i]; 
		}
		
		int sum = 0;
		int average;
		
		for (int i = 0; i < n; i++) {
			sum = sum + arr[i]; 
		}
		
		//std::cout << sum << " ";
		
		if (sum % n != 0) {
			numTransfers = -1;
		} else {
			average = sum / n;
			
			while (true) {
				int max = findMax(arr, n);
				int min = findMin(arr, n);
				
				//std::cout << max << " " << min;
				
				if (arr[max] == arr[min]) {
					break;
				} else {
					int trans = (int)(ceil(arr[max] - arr[min]) / 2);
					arr[max] -= trans;
					arr[min] += trans;
					numTransfers++;	
				}
			}	
		}
		
		std::cout << numTransfers << "\n";
	}

	return 0;
}

int findMax(int arr[], int n) {
	int max = 0;
	
	for (int i = 1; i < n; i++) {
		if (arr[max] < arr[i]) {
			max = i;
		}
	}
	
	return max;
} 

int findMin(int arr[], int n) {
	int min = 0;
	
	for (int i = 1; i < n; i++) {
		if (arr[min] > arr[i]) {
			min = i;
		}
	}
	
	return min;
}


