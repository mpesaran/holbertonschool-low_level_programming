#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - This is about comparing last digit of a random number
*
* Return: last digit is more than 5 or zero orless than 5
*/
int main(void)
{
	int n;
	int lst_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_dgt = n % 10;
	if (lst_dgt > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lst_dgt);
	}
	else if (lst_dgt == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lst_dgt);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lst_dgt);
	}
	return (0);
}
