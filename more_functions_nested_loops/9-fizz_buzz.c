#include <stdio.h>

/**
 * main - prints 1 to 100 except multiplies of 3, 5 and 15
 *
 * Return: 0 always
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0 && n != 100)
		{
			printf("Buzz ");
		}
		else if (n == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	printf("\n");
	return (0);
}
