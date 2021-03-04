#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

int *ft_range(int min, int max);

int main()
{
	printf("\n***********************\nEx00:\n");
	char a[] = "andre";
	printf("\nSrc = %s\n", a);
	printf("\nResultado = %s\n", ft_strdup(a));
	printf("Expected = %s\n", strdup(a));
	printf("\n\n");

	printf("***********************\nEx01:\n");
	return (0);
}
