#include "main.h"

/**
 *reverse_array - reverses the content of an array
 *@a: the array to be reversed
 *@n: nuber of elements in array
 */
void reverse_array(int *a, int n)
{
	int *ptr;

	while (*a != '\0')
	{
		*ptr = a[n-1];
		ptr++;
		a++;
	}
}
