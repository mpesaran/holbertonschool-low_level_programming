#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: number to be processed
 * @index: index of bit to clear
 *
 * Return: 1 if successfule, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
