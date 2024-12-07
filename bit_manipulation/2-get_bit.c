#include "main.h"
#include <limits.h>
/**
 * get_bit - returns value of a bit at given index
 * @n: nuber to be processed
 * @index: index of the bit we want to get
 *
 * Return: value of the bit, -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);
	return ((n >> index) & 1);
}
