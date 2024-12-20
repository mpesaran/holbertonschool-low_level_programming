#include "function_pointers.h"
/**
 * print_name - prints a name based on which function given
 * @name: string to be printed
 * @f: the callback function
 *
 * Return: void
 */
void print_name(char *name, void(*f)(char *))
{
	f(name);
}
