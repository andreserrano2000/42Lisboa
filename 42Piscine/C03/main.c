#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int ft_strncmp(char *s1, char *s2, unsigned int n);

char *ft_strcat(char *dest, char *src);

char *ft_strncat(char *dest, char *src, unsigned int nb);

char *ft_strstr(char *str, char *to_find);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	printf("\n******************\nEx00:\n\n");
	char test1[] = "and";
	char test2[] = "andre";
	printf("Char 1 = %s\n", test1);
	printf("Char 2 = %s\n", test2);
	printf("\nResultado: %d\n", ft_strcmp(test1, test2));
	printf("Expected: %d\n", strcmp(test1, test2));
	
	printf("\n******************\nEx01:\n\n");
	unsigned int n;
	n = 4;
	char test3[] = "xello!";
	char test4[] = "andre";
	printf("valor de n = %d\n", n);
	printf("Char 1 = %s\n", test3);
	printf("Char 2 = %s\n", test4);
	printf("\nResultado: %d\n", ft_strncmp(test3, test4, n));
	printf("Expected: %d\n", strncmp(test3, test4, n));
	
	printf("\n\n******************\nEx02:\n\n");
	char test5[] = "Andre";
	char test6[] = "Hello, ";
	printf("Src = %s\n", test5);
	printf("Dest = %s\n", test6);
	printf("\nResultado: %s\n", ft_strcat(test6, test5));
	
	printf("\n******************\nEx03:\n\n");
	unsigned int nb;
	nb = 3;
	char test7[] = "Andre";
	char test8[100] = "Hello, ";
	printf("nb = %d\n", nb);
	printf("Src = %s\n", test7);
	printf("Dest = %s\n", test8);
	printf("\nResultado: %s\n", ft_strncat(test8, test7, nb));

	
	printf("\n******************\nEx04:\n\n");
	char test9[] = "Ola Andre Adeus";
	char test10[] = "dr";
	printf("Str = %s\n", test9);
	printf("To_find = %s\n", test10);
	printf("\nResultado: %s\n", ft_strstr(test9, test10));
	printf("Expected: %s\n", strstr(test9, test10));

	
	printf("\n******************\nEx05:\n\n");
	unsigned int size = 5;
	char test11[] = "12345";
	char test12[] = "ABCDEFGHIJ";
	printf("Size = %d\n", size);
	printf("Str = %s\n", test11);
	printf("Dest = %s\n", test12);
	printf("\nResultado: %d\n", ft_strlcat(test12, test11, size));
	printf("Expected: %lu\n", strlcat(test12, test11, size));
	printf("\n\n");
	return (0);
}
