#include <stdarg.h>
#include <stddef.h>
#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 * struct format_spec - specifies different formats
 *
 * @t: the type
 * @f: the function associated
 */
typedef struct format_spec
{
        char t;
        void (*f)(va_list args);
}fmt_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

#endif
