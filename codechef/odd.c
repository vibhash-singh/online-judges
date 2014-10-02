#include <stdio.h>
 
int findSelectedCandidate(int totalCandidates);

int pow_2[] = {1, 2, 4, 8, 16, 32, 
			64, 128, 256, 512, 1024, 
			2048, 4096, 8192, 16384, 32768, 
			65536, 131072, 262144, 524288, 1048576, 
			2097152, 4194304, 8388608, 16777216, 33554432, 
			67108864, 134217728, 268435456, 536870912};

int main()
{
	int testCases = 0;
	unsigned noOfApplicants = 0;

	scanf("%d", &testCases);
	
	while (testCases--)
	{
		scanf("%d", &noOfApplicants);
		printf("%d\n", findSelectedCandidate(noOfApplicants));
	}
}
 
int findSelectedCandidate(int totalCandidates)
{
	int i = 1;

	while (pow_2[i] < totalCandidates && i < 30) i++;
	return pow_2[i - 1];
}
