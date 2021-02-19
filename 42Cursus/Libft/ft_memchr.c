#include "libft.h"

void 	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*source;

	source = (char *)s;
	i = 0;
	while (i < n)
	{
		if (source[i] == c)
			return (source + i);
		i++;
	}
	return 0;
}