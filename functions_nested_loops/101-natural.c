#include <stdio.h>
#include "main.h"

/**
 * sum - will add all the numbers less than 1024 that are multiple of 3 or 5
 */
void sum(void)
{
	int result = 0;
	int n = 1;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 ==0)
		{
			result = result + n;
		}
		n++;
	}
	printf("%d\n", result);
}
