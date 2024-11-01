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
			result = result * 10 + (s[i] - '0');
			if (result * sign == INT_MIN)
			       return (INT_MIN)	
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}		
		}
		i++;
	}
	return (result * sign);
}
