#include <stdio.h>
#include "libft.h"

int main()
{
    printf("\n*****************\nft_memset:\n\n");
    char test1[] = "this is an example!";
    void *str = test1;
    int a = '$';
    int size = 7;
    printf("Str = %s\n", test1);
    printf("C = %i\n", a);
    printf("Size = %i\n", size);
    printf("Resultado: %s\n", ft_memset(str, a, size));

    printf("\n*****************\nft_strrchr:\n\n");
    const char test10[] = "andremiguel";
    int b1 = 'm';
    printf("Str = %s\n", test10);
    printf("C = 'm'\n");
    printf("Resultado: %s\n", ft_strrchr(test10, b1));

     printf("\n*****************\nft_bzero:\n\n");
    char test9[] = "this is an example!";
    void *str1 = test9;
    int n = 7;
    printf("Size = %i\n", n);
    ft_bzero(test9, n);
    printf("Resultado: %s\n", test9);

    printf("\n*****************\nft_strlen:\n\n");
    char test2[] = "andre";
    printf("Str = %s\n", test2);
    printf("Resultado: %d\n", ft_strlen(test2));

    printf("\n*****************\nft_strchr:\n\n");
    const char test3[] = "andremiguel";
    int b = 'm';
    printf("Str = %s\n", test3);
    printf("C = 'm'\n");
    printf("Resultado: %s\n", ft_strchr(test3, b));

    printf("\n*****************\nft_substr:\n\n");
    const char test4[] = "andremiguel";
    int c = 5;
    int d = 3;
    printf("Str = %s\n", test4);
    printf("Start = %i\n", c);
    printf("Len = %i\n", d);
    printf("Resultado: %s\n", ft_substr(test4, c, d));

    printf("\n*****************\nft_strjoin:\n\n");
    char test5[] = "andre";
    char test6[] = "miguel";
    printf("S1 = %s\n", test5);
    printf("S2 = %s\n", test6);
    printf("Resultado: %s\n", ft_strjoin(test5, test6));

    printf("\n*****************\nft_strtrim:\n\n");
    char test7[] = "aandreanmiguelan";
    char test8[] = "an";
    printf("S1 = %s\n", test7);
    printf("Set = %s\n", test8);
    printf("Resultado: %s\n", ft_strtrim(test7, test8));
    printf("Expected: dreanmiguel\n");

    return 0;
}