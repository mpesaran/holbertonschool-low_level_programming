#include "main.h"
#include <limits.h>

/**
 * 
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
			if (sign == -1 && result > (INT_MIN + digit) / 10)
                        {
                                 return (INT_MIN);
                        }
			else if (sign == +1 && result > (INT_MAX - digit) / 10)
			{
				return (INT_MAX);
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
