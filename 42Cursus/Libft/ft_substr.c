#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len){
    size_t a = 0;
    size_t b =0;
    char *res;

    res = (char*)malloc(sizeof(*s) * (len + 1));

    while (s[a] != '\0')
    {
        if (a >= start && b < len)
        {
            res[b] = s[a];
            b++;
        }
        a++;
    }
    return (res);
    
}
