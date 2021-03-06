/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <anserran@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:28:41 by anserran          #+#    #+#             */
/*   Updated: 2021/02/15 14:28:41 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

    
    printf("\n*****************\nft_strnstr:\n\n");
    const char haystack[] = "andremiguel";
    const char needle[] = "emi";
    size_t len = 7;
    printf("Big = %s\n", haystack);
    printf("Short = %s\n", needle);
    printf("Resultado: %s\n", ft_strnstr(haystack, needle, len));

    
    printf("\n*****************\nft_memcpy:\n\n");
    const char src[50] = "newstring";
    char dest[50];
    strcpy(dest, "oldstring");
    printf("Antes de ft_memcpy dest = %s\n", dest);
    ft_memcpy(dest, src, strlen(src) + 1);
    printf("Depois de ft_memcpy dest = %s\n", dest);


    printf("\n*****************\nft_memmove:\n\n");
    char dest1[] = "oldstring";
    const char src1[] = "newstring";
    printf("Antes de ft_memmove dest = %s\n", dest1);
    ft_memmove(dest1, src1, 9);
    printf("Depois de memmove dest = %s\n", dest1);


    printf("\n*****************\nft_isalpha:\n\n");
    int int1 = 'd';
    printf("int c = %i\n", int1);
    printf("Resultado = %i\n", ft_isalpha(int1));


    printf("\n*****************\nft_memchr:\n\n");
    const char test12[] = "andremiguel";
    char ch = 'm';
    printf("Str = %s\n", test12);
    printf("C = %c\n", ch);
    printf("Resultado = %s\n", ((char *)ft_memchr(test12, ch, 7))); 

    
    printf("\n*****************\nft_isdigit:\n\n");
    int int2 = '6';
    printf("int c = %c\n", int2);
    printf("Resultado = %i\n", ft_isdigit(int2));


    printf("\n*****************\nft_memcmp:\n\n");
    char str3[15];
    char str4[15];
    int ret;
    ft_memcpy(str3, "abcdef", 6);
    ft_memcpy(str4, "ABCDEF", 6);
    ret = ft_memcmp(str3, str4, 5);
    printf("Resultado = %i\n", ret);


    printf("\n*****************\nft_isascii:\n\n");
    int int3 = '3';
    printf("int c = %i\n", int3);
    printf("Resultado = %i\n", ft_isascii(int3));


    printf("\n*****************\nft_strlcpy:\n\n");
    char dest2[] = "andremiguel";
    const char src2[] = "miguel";
    size_t len1 = 4;
    printf("Dest before = %s\n", dest2);
    printf("Src = %s\n", src2);
    printf("Resultado: %i\n", ft_strlcpy(dest2, src2, len1));
    printf("Dest after = %s\n", dest2);


    printf("\n*****************\nft_isprint:\n\n");
    int int4 = 'A';
    printf("int c = %i\n", int4);
    printf("Resultado = %i\n", ft_isprint(int4));


    printf("\n*****************\nft_strlcat:\n\n");
    char dest3[20] = "miguel";
    const char src3[] = "andre";
    size_t len2 = 4;
    printf("Dest before = %s\n", dest3);
    printf("Src = %s\n", src3);
    printf("Resultado: %i\n", ft_strlcat(dest3, src3, len2));


    printf("\n*****************\nft_toupper:\n\n");
    int int5 = 'b';
    printf("int c = %c\n", int5);
    printf("Resultado = %c\n", ft_toupper(int5));


    printf("\n*****************\nft_tolower:\n\n");
    int int6 = 'B';
    printf("int c = %c\n", int6);
    printf("Resultado = %c\n", ft_tolower(int6));


    printf("\n*****************\nft_calloc:\n\n");
    printf("Resultado = %s\n", ft_calloc(5, sizeof(char)));


    printf("\n*****************\nft_strdup:\n\n");
    char str5[] = "andremiguel";
    printf("%s\n", ft_strdup(str5));


    printf("\n*****************\nft_atoi:\n\n");
    char test11[] = " -1234ab567";
    printf("Str = %s\n", test11);
    printf("\nExpected: %d\n", atoi(test11));
    printf("\nResultado: %d\n", ft_atoi(test11));


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


    printf("\n*****************\nft_itoa:\n\n");
    int n1 = 4;
    printf("Str = %i\n", n1);
    printf("Resultado: %s\n", ft_itoa(n1));    


    return 0;
}