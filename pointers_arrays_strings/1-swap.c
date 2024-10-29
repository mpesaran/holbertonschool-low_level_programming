#include "main.h"

/** swap - swaps the value of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
