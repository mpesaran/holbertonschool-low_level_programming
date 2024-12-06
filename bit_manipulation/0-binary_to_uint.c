#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: the binary number
 *
 * Return: if succeccful converted number, 0 ohterwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, base = 1;
	int length = 0, i;

	if (b == NULL)
		return (0);
	while (b[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			num = num + base;
		}
		base = base * 2;
	}
	return (num);
}
