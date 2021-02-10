#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		++a;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}