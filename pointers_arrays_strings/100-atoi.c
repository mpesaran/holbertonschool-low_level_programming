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
			if (sign == -1 && result == (INT_MIN + digit) / 10)
                        {
                                 return (INT_MIN);
				 break;
                        }
			else if (sign == +1 && result == (INT_MAX - digit) / 10)
			{
				return (INT_MAX);
				break;
			}
			else
			{
				result = result * 10 + digit;
				if (s[i + 1] < '0' || s[i + 1] > '9')
				{
					break;
				}		
			}
		}	
		i++;
	}
	if (sign == -1 && result == INT_MIN)
        	return INT_MIN;
	if (sign == +1 && result == INT_MAX)
		return INT_MAX;
	return (result * sign);
}
