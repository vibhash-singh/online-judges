#include <iostream>

unsigned long findSelectedCandidate(unsigned long totalCandidates);
int main()
{
	unsigned long totalTestCases = 0;
	unsigned long noOfApplicants = 0;
	
	std::cin >> totalTestCases;
	
	for (unsigned long testCase = 1; testCase <= totalTestCases; testCase++) {
		std::cin >> noOfApplicants;
		std::cout << findSelectedCandidate(noOfApplicants) << "\n";
	}
	
	return 0;
}

unsigned long findSelectedCandidate(unsigned long totalCandidates)
{
	unsigned long selectedCandidate = 1;
	
	while (selectedCandidate <= (totalCandidates / 2)) {
		selectedCandidate *= 2;
	}
	
	return selectedCandidate;
}
