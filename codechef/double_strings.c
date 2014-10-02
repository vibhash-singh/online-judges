#include <stdio.h>

int main()
{
	int test_cases = 0;
	int length = 0;

	scanf("%d", &test_cases);

	while (test_cases--)
	{
		scanf("%d", &length);
		(length & 1) ? printf("%d\n", length - 1) : printf("%d\n", length);
	}	

	return 0;
}
