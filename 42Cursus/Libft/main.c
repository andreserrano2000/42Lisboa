#include <stdio.h>

int main(){
    printf("\n*****************\nft_memset:\n\n");
	char test1[] = "this is an example!";
    void *str = test1;
    int c = '$';
    int size = 7;
	printf("Str = %s\n", test1);
    printf("C = %i\n", c);
    printf("Size = %i\n", size);
	printf("Resultado: %s\n", ft_memset(str,'$',7));

    /*printf("\n*****************\nft_stlen:\n\n");
	char test1[] = "andre";
	printf("Str = %s\n", test1);
	printf("Resultado: %d\n", ft_strlen(test1));*/

    return 0;
}