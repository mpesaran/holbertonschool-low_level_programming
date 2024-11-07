#include "main.h"

/**
 * is_prime_number - runs the helper function to find if the number is prime
 * @n: the number to evaluated
 *
 * Return: 0 if it is not prime, 1 if it is prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper - checks multiplies of the number n
 * @n: the number to be evaluated
 * @multiple: multiples to be checked against n
 *
 * Return: 1 if is n prime, 0 otherwise
 */
int is_prime_helper(int n, int multiple)
{
	if (multiple * multiple > n)
	{
		return (1);
	}
	if (n % multiple == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, multiple + 1));
}
