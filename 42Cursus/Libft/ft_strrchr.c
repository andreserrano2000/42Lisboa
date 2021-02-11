#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    char *res;
    int a = ft_strlen(str) - 1;

    while (a >= 0)
    {
        if (str[a] == c)
        {
            res = str + a;
            return (res);
        }
        a--;
    }
    return 0;
}