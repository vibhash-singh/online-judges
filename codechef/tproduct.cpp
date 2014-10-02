#include <iostream>
#include <math.h>

#define MOD 1000000007
#define COMPENSATOR 1000000000
#define ARRAY_MAX 32768

double max(double a, double b);
int leftChildIndex(int indexParent);
int rightChildIndex(int indexParent);

int main() {
	int height; 
	long long arr[ARRAY_MAX];
	double p[ARRAY_MAX];
	
	std::cin >> height;
	
	while (height != 0) {
		bool path[ARRAY_MAX] = {false}; 
	
		int limit1 = (int)(pow(2, height)) - 1;
		
		for (int i = 1; i <= limit1; i++) {
			std::cin >> arr[i];
		}
		
		int limit2 = (int)(pow(2, height - 1)) - 1;
				
		for (int j = limit1; j >= limit2 + 1; j--) {
			p[j] = (double)arr[j] / (double)COMPENSATOR;
		}
		
		for (int j = limit2; j >= 1; j--) {						
			double m = max(p[leftChildIndex(j)], p[rightChildIndex(j)]);
			
			p[j] =  ((double)arr[j] * (double)m) / (double)COMPENSATOR;
						
			if (p[leftChildIndex(j)] > p[rightChildIndex(j)]) {
				path[leftChildIndex(j)] = true;
			} else {
				path[rightChildIndex(j)] = true;
			}
		}
		
		long long product = arr[1]; 
		int i = 1;
		
		while (i <= limit2) {
			if (path[leftChildIndex(i)]) {
				product = product * arr[leftChildIndex(i)];
				i = 2 * i;
			} else {
				product = product * arr[rightChildIndex(i)];
				i = 2 * i + 1;
			}
			
			product = product % MOD;
		}
		
		std::cout << product << "\n";
		std::cin >> height; 
	}
	
	return 0;
}

int leftChildIndex(int indexParent) {
	return 2 * indexParent;
} 

int rightChildIndex(int indexParent) {
	return 2 * indexParent + 1;
}

double max(double a, double b) {
	return a > b ? a : b; 
} 
