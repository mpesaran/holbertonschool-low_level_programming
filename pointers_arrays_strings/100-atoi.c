#include "main.h"

/**
 * 
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	
	while (*s)
	{
		if (*s < '0' || (*s > '9' && *s != '-' && *s != '+'))
		{
			s++;
			continue;
		}
		if (*s == '-')
		{
			sign *= -1;
			s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			s++;
		}
		else
		{
			break;
		}
	}
	return (result * sign);
}
