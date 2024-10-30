#include "main.h"

/**
 * 
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int count = 0;
	
	while (*s)
	{
		if ((*s < '0' || *s > '9') && *s != '-' && *s != '+')
		{
			s++;
			continue;
		}
		if (*s == '-')
		{
			count++;
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
	if (count % 2 != 0)
	{
		sign = -1;
	}
	return (result * sign);
}
