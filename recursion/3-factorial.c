#include "main.h"
/**
 * factorial - prints the factorial of an integer
 * @n: the number to be calculated
 *
 * Return: 1 if n is 0, -1 if n is less than 0, factorial of n otherwise
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
