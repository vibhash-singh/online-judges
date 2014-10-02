#include <iostream>

int calcNoOfPieces(unsigned long length, unsigned short breadth);

int main()
{
	unsigned long m, n;
	unsigned short p, q;
	unsigned long totalPieces = 0;;
	int totalTestCases = 0;
	
	std::cin >> totalTestCases;

	if(1 <= totalTestCases <= 1000) {
		for (int testCase = 1; testCase <= totalTestCases; testCase++) {
			std::cin >> m >> n >> p >> q;
		
			if((1 <= m <= n <= 100000000 && 1 <= p <= q <= 1000)) {
				for (unsigned long i = m; i <= n; i++) {
					for (unsigned short j = p; j <= q; j++) {
						totalPieces = totalPieces + calcNoOfPieces(i , j);
					}
				}
			}
		}
	}
	
	std::cout << totalPieces;
	return 0;
}

int calcNoOfPieces(unsigned long length, unsigned short breadth)
{
	unsigned long noOfPieces = 1;
	
	while(true) {
		if(length > breadth) {
			length = length - breadth;
		} else if (length < breadth) {
			breadth = breadth - length;
		} else {
			break;
		}
		
		noOfPieces++;
	}
	
	return noOfPieces;;
}
