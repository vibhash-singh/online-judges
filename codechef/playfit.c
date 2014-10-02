#include <stdio.h>

#define LIMIT 100001

long int find_max_goal_diff(long int a[], int n);

int main()
{
	int n;	
	int test_cases;

	scanf("%d", &test_cases);

	while (test_cases--)
	{
		long int arr[LIMIT];
		scanf("%d", &n);
			
		for (int i = 0; i < n; i++)
		{
			scanf("%ld", &arr[i]);
		}

		long int result = find_max_goal_diff(arr, n);
		(result == -1 || result == 0) ? printf("UNFIT\n") : printf("%ld\n", result);
	}

	return 0;
}

long int find_max_goal_diff(long int a[], int n)
{
	long int max_diff = -1;
	long int min = a[0];
	bool found = false;

	for (int i = 0; i < n; i++)
	{
		found = false;
		
		while (i < n - 1 && a[i + 1] >= a[i])
		{
			found = true;
			i++;
		}

		if (found)
		{
			if (a[i] - min > max_diff)
			{
				max_diff = a[i] - min;
			}
		}
		
		if (i < n - 1 && a[i + 1] < min)
		{
			min = a[i + 1];
		}
	}

	return max_diff;
}



