#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - prints if the args is char
 * @args: passed argument
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - prints if the args is int
 *@args: passed argument
 */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}
/**
 * print_float - prints if the args is float
 * @args: passed argument
*/
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - prints if the args is string
 * @args: passed argument
*/
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - checks the format against strunct and call the associated
 * function
 * @format: a string to show types of next arguments
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list args;
	char *separator = "";
	fmt_t formats[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{'\0', NULL}
	};

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (formats[j].t != '\0')
		{
			if (format[i] == formats[j].t)
			{
				printf("%s", separator);
				formats[j].f(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
