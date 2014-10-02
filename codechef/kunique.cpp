#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, k;
	unsigned long num;

	cin >> n >> k;
	
	vector<unsigned long> numVector(n);
	int arr[50000];
	int pointers[50000] = {0};
	
	for (int i = 0; i < n; i++) {
		cin >> num;
		numVector.at(i) = num;
	}
	
	sort(numVector.begin(), numVector.end());
	
	int noOfSets = n / k;
	bool solutionExist = true;
	
	for (int i = 0; i < n - 1; i++) {
		int count = 0;
	
		while (numVector.at(i) == numVector.at(i+1)) {
			count++;
			
			if (count > noOfsets) {
				solutionExist = false;
				break;
			}
		}
		
		if (!solutionExist) {
			break;
		}
	}
	
	
	
	if (solutionExist) {
		arr[0] = numVector.at(0);
		pointer[0]++;
	
		// for (int i = 1; i < n; i++) {
			// int num1 = numVector.at(i);
			// int num2 = numVector.at(i + 1);
		
		for (set = 0; set < noOfset - 1; set++) {
			for (int i = 0;i < k - 1; i++) {
				int *num1 = &numVector.at((set * k) + i);
				int *num2 = &numVector.at((set * k) + i + 1);
				
				if (*num1 == *num2) {
					  
				}
			}
		}S
	}
	// for (int i = 0; i < n; i++) {
		// cout << numVector.at(i) << " ";
	// }
	
	return 0;
}
