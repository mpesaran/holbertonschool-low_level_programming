#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *
 */
typedef struct format_spec
{
	char t;
	void (*f)(va_list args);
}fmt_t;
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	if (*str == '\0')
	{
		str = "(nill)";
	}
	printf("%s", str);
}
/**
 *
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
				printf("%s",separator);
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
