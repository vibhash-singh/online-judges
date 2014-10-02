#include <iostream>
#include <math.h> 

bool isPowerOf2(int num);
int calcNthTerm(int n);

int main() {
	int testCases, n;
	std::cin >> testCases;
	
	while (testCases--) {
		std::cin >> n;
		std::cout << calcNthTerm(n) << "\n"; 
	}

	return 0;
}

int calcNthTerm(int n) {
	if(isPowerOf2(n)) {
		return (int) pow(5, n);
	} else {
		int b = (int) pow(2, ceil(log(n)/log(2)));
		return (int) pow(5, b) + calcNthTerm(n - b);
	}
}

bool isPowerOf2(int num) {
	return num != 0 && (num & (num -1)) == 0;
}
























 