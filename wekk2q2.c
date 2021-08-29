#include <stdio.h>

void findPair(int arr[], int n, int target)
{
	
	for (int i = 0; i < n - 1; i++)
	{
		
		for (int j = i + 1; j < n; j++)
		{
			
			if (arr[i] + arr[j] == target)
			{
				printf("Pair found (%d, %d)", arr[i], arr[j]);
				return;
			}
		}
	}

	
	printf("Pair not found");
}

int main(void)
{
	int arr[] = { 8, 7, 2, 5, 3, 1 };
	int target = 10;

	int n = sizeof(arr)/sizeof(arr[0]);

	findPair(arr, n, target);

	return 0;
}
