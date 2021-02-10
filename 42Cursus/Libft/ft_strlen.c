#include "libft.h"

size_t ft_strlen(const char *str){
    int a = 0;
    while (str[a] != '\0')
    {
        a++;
    }
    return(a);
}