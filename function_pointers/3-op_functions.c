#include "3-calc.h"
#include <stddef.h>
/**
 * op_add - adds two integers
 * @a: firs integer
 * @b: second int
 *
 * Return: an integer
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two integers
 * @a: firs integer
 * @b: second int
 *
 * Return: an integer
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mltiplies two integers
 * @a: firs integer
 * @b: second int
 *
 * Return: an integer
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: an integer, 100 if second integer is 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}
/**
 * op_mod - divides two integers and returns remainder
 * @a: firs integer
 * @b: second integer
 *
 * Return: an integer, 100 if second number is 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
