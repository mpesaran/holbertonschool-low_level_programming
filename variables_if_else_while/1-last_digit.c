#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - This is about comparing last digit of a random number
*
* Return: last digit is more than 5 or zero orless than 5
*  
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_digit);
	}	
	return (0);
}
