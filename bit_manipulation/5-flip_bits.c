#include "main.h"
/**
 * flip_bits - 
 * @n: number to be processed
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff = diff >> 1;
	}
	return (count);
}
