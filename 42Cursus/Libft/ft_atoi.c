#include "libft.h"

int ft_atoi(char *str)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 1;
	c = 0;
	while (str[a] == '\n' || str[a] == ' ' || str[a] == '\t' ||
		   str[a] == '\r' || str[a] == '\v' || str[a] == '\f')
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		b = str[a] == '-'? -1 : 1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
		c = (c * 10) + (str[a++] - '0');
	return (c * b);
}