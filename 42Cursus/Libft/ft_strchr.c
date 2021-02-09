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
            a++;
            while (str[a] != '\0')
            {
                res[b] = str[a];
                a++;
            }
            return(res);
        }
        
        a++;
    }
    return("Error!");
}