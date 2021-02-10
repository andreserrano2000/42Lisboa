#include "libft.h"

char		*ft_strchr(const char *str, int c)
{
    int a = 0;
    int b = 0;
    char *res;

	while (str[a] != '\0')
    {
        if (str[a] == c)
        {
                res = str + a;
            return(res);
        }
        
        a++;
    }
    return 0;
}