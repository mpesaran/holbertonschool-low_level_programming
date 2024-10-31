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
		if (*s == ' ')
		{
			s++;
		}
		else if (*s == '-')
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
			result = result * 10 + (*s - '0');
			s++;
			flag = 1;		
		}
		if (*s < '0' || *s > '9')
		{
			s++;
		}
	}
	if (count % 2 != 0) 
		sign = -1;
	return (result * sign);
}
