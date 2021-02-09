#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_iterative_factorial(int nb);

int ft_recursive_factorial(int nb);

int ft_iterative_power(int nb, int power);

int ft_recursive_power(int nb, int power);

int ft_fibonacci(int index);

int ft_sqrt(int nb);

int ft_is_prime(int nb);

int ft_find_next_prime(int nb);

int main()
{
	printf("\n*****************\nEx00:\n\n");
	int nb = 5;
	printf("Nb = %i\n", nb);
	printf("\nResultado: %i\n", ft_iterative_factorial(nb));
	printf("\n");

	printf("\n*****************\nEx01:\n\n");
	int nb1 = 5;
	printf("Nb = %i\n", nb1);
	printf("\nResultado: %i\n", ft_recursive_factorial(nb1));
	printf("\n");

	printf("*****************\nEx02:\n\n");
	int nb2 = 4;
	int power = 2;
	printf("Nb = %i\n", nb2);
	printf("Power = %i\n", power);
	printf("\nResultado: %i\n", ft_iterative_power(nb2, power));
	printf("\n");

	printf("*****************\nEx03:\n\n");
	int nb3 = 4;
	int power1 = 2;
	printf("Nb = %i\n", nb3);
	printf("Power = %i\n", power1);
	printf("\nResultado: %i\n", ft_recursive_power(nb3, power1));
	printf("\n");

	printf("*****************\nEx04:\n\n");
	int index = 6;
	printf("Index = %i\n", index);
	printf("\nResultado: %i\n", ft_fibonacci(index));
	printf("\n");
	
	printf("*****************\nEx05:\n\n");
	int nb4 = 2147483647;
	printf("Nb = %i\n", nb4);
	printf("\nResultado: %i\n", ft_sqrt(nb4));
	printf("\n");
	
	printf("*****************\nEx06:\n\n");
	int nb5 = 2147483629;
	printf("Nb = %i\n", nb5);
	printf("\nResultado: %i\n", ft_is_prime(nb5));
	printf("\n");
	
	printf("*****************\nEx07:\n\n");
	int nb6 = 2147483628;
	printf("Nb = %i\n", nb6);
	printf("\nResultado: %i\n", ft_find_next_prime(nb6));
	printf("\n");
	return (0);
}
