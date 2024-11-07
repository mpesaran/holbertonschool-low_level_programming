#include "main.h"
/**
 * _sqrt_recursion - Checks the negative values and runs the helper function
 * @n: the number to calculate sqrt for
 *
 * Return: -1 if n is negative number; otherwise run the helper function
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqr_root(n, 1, 0));
}
/**
 * sqr_root - subtacts odd from n and count each step
 * @n: number calculated to find root for
 * @odd: odd numbers starting from 1
 * @count: to count steps to reach to result starting from 0
 *
 * Return: count if n reches 0; otherwise -1
 */
int sqr_root(int n, int odd, int count)
{
	if (n == 0)
	{
		return (count);
	}
	else if (n < 0)
	{
		return (-1);
	}
	_sqr_root(n - odd, odd + 2, cpunt++);
}
