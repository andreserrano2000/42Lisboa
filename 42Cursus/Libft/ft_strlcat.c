#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t destsize)
{
	char *d = dest;
	const char *s = src;
	size_t n = destsize;
	size_t dlen;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dest;
	n = destsize - dlen;
	if (n == 0)
		return (dlen + strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}