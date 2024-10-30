#include "main.h"

/**
 * 
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int count = 0;
	
	while (*s ==' ')
	{
		s++;
	}
	while (*s)
	{
		if (*s == '-')
		{
			count++;
			s++;
		}
		else if (*s == '+')
		{
			s++;
		}		
		if (*s >= '0' && *s <= '9')
		{
			do
			{
				result = result * 10 + (*s - '0');
				s++;
			}
			while (*s <= '0' && *s <= '9')
			break;
		}
		if (*s < '0' || s > '9')
		{
			s++;
		}
	}
	if (count % 2 != 0) ? sign = -1 : sign = +1;
	return (result * sign);
}
