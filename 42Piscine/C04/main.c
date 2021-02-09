#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strlen(char *str);

void ft_putstr(char *str);

void ft_putnbr(int nb);

int ft_atoi(char *str);

int main()
{
	printf("\n*****************\nEx00:\n\n");
	char test1[] = "andre";
	printf("Str = %s\n", test1);
	printf("Resultado: %d\n", ft_strlen(test1));
	
	printf("\n*****************\nEx01:\n\n");
	char test2[] = "andre";
	printf("Str = %s\n", test2);
	write(1, "resultado: ", 11);
	ft_putstr(test2);
	printf("\n\n");
	
	printf("*****************\nEx02:\n\n");
	int nb; 
	nb = -123123;
	printf("Nb = %d\n", nb);
	write(1, "resultado: ", 11);
	ft_putnbr(nb);
	printf("\n\n");
	
	printf("*****************\nEx03:\n\n");
	char test3[] = " ---+--+1234ab567";
	printf("Str = %s\n", test3);
	printf("\nResultado: %d\n", ft_atoi(test3));
	printf("\n\n");

	printf("*****************\nEx04:\n\n");
	return(0);
}
