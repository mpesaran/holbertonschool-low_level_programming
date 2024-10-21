#include<stdio.h>

/**
 *main - This function is to print sizes of data types
 *
 *Description: What returns from sizeof function is
 *type size_t and zu should use for it
 *Return: zero if successfuly executed
*/
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lli));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
