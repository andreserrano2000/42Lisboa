#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2){
    
    int a = 0;
    int b = 0;
    char *res;

    int len1 = ft_strlen(s1);
    int len2 = ft_strlen(s2);

    res = (char*)malloc(sizeof(char) * (len1 + len2 + 1));

    while (s1[a] != '\0')
    {
        res[a] = s1[a];
        a++; 
    }
    while (s2[b] != '\0')
    {
        res[a] = s2[b];
        b++;
        a++;
    }
    res[a] = '\0';
    return(res);

}