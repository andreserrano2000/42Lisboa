#include <stdio.h>
#include "libft.h"



int main(){
    printf("\n*****************\nft_memset:\n\n");
	char test1[] = "this is an example!";
    void *str = test1;
    int c = '$';
    int size = 7;
	printf("Str = %s\n", test1);
    printf("C = %i\n", c);
    printf("Size = %i\n", size);
	printf("Resultado: %s\n", ft_memset(str,'$', size));

    printf("\n*****************\nft_strlen:\n\n");
	char test2[] = "andre";
	printf("Str = %s\n", test2);
	printf("Resultado: %d\n", ft_strlen(test2));

    printf("\n*****************\nft_strchr:\n\n");
    const char test3[] = "andremiguel";
    int cc = 'm';
	printf("Str = %s\n", test3);
    printf("C = 'm'\n");
	printf("Resultado: %s\n", ft_strchr(test3, cc));

    return 0;
}