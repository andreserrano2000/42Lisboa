#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    int a = 0;
    int b = 0;
    int g = 0;

    while (a < len && big[a] != '\0')
    {
        g = a;
        b = 0;
        while (big[a] == little[b] && little[b] != '\0')
        {
            b++;
            a++;
        }
        if (ft_strlen(little) == b)
        {
            return (big + g);
        }
        a = g + 1;
    }

    return 0;
}