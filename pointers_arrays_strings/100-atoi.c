#include "main.h"
#include <limits.h>

/**
 * _atoi - Return a string to int numbers
 * @s: the string to be processed
 *
 * Return: depends on string has different return,final return is an integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int digit;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{
			sign *= 1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = (s[i] - '0');
			if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7))
			{
				return (sign == 1 ? INT_MAX : INT_MIN);
			}
			else if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit > 8))
			{
				return (sign == 1 ? INT_MAX : INT_MIN);
			}
			result = result * 10 + digit;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}		
		}
		i++;
	}
	return (result * sign);
}
