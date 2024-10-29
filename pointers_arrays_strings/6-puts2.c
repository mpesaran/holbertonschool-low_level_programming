#include "main.h"

/**
 * puts2 - prints every other character of a strin
 * @str: Pointer to the string to be processed.
 */
void puts2(char *s)
{
	int toggle = 1;

	while (*str != '\0')
	{
		if (toggle)
			_putchar(*str);
		toggle = !toggle;
		str++;
	}
	_putchar('\n');
}
