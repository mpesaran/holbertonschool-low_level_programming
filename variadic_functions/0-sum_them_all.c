#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all args
 * @n: number of args
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i  = 0; i < n ; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
