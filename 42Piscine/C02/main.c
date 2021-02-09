#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	ft_str_is_alpha(char *str);

int	ft_str_is_numeric(char *str);

int ft_str_is_lowercase(char *str);

int ft_str_is_uppercase(char *str);

int ft_str_is_printable(char *str);

char *ft_strupcase(char *str);

char *ft_strlowcase(char *str);

char *ft_strcapitalize(char *str);

int main(){
	int a;

	printf("\n******************\nEx01:\n\n");
	a = 6;
	char test1[11] = "A pink car";
	char test2[7] = "A blue";
	printf("Char dest = %s\n", test1);
	printf("Char src = %s\n", test2);
	printf("Resultado: %s\n", ft_strncpy(test1, test2, a));
	printf("\nValor de n = %i", a);

	printf("\n\n******************\nEx02:\n\n");
	char str[] = "salut, COMMENT tU v7As ? 42mots quarante-deux; cinquante+et+un";
	char str1[] = "Palavra";
	printf("Str = %s\n", str);
	printf("\nReturn = %i\n\n", ft_str_is_alpha(str));
	printf("\nStr = %s\n", str1);
	printf("\nReturn = %i\n", ft_str_is_alpha(str1));
	
	printf("\n******************\nEx03:\n\n");
	char str2[] = "salut, 9";
	char str3[] = "01234";
	printf("Str = %s\n", str2);
	printf("\nReturn = %i\n\n", ft_str_is_numeric(str2));
	printf("\nStr = %s\n", str3);
	printf("\nReturn = %i\n", ft_str_is_numeric(str3));

	
	printf("\n******************\nEx04:\n\n");
	char str4[] = "Salut!";
	char str5[] = "salut";
	printf("Str = %s\n", str4);
	printf("\nReturn = %i\n\n", ft_str_is_lowercase(str4));
	printf("\nStr = %s\n", str5);
	printf("\nReturn = %i\n", ft_str_is_lowercase(str5));

	
	printf("\n******************\nEx05:\n\n");
	char str6[] = "Salut!";
	char str7[] = "SALUT";
	printf("Str = %s\n", str6);
	printf("\nReturn = %i\n\n", ft_str_is_uppercase(str6));
	printf("\nStr = %s\n", str7);
	printf("\nReturn = %i\n", ft_str_is_uppercase(str7));

	
	printf("\n******************\nEx06:\n\n");
	char str8[] = "\n";
	char str9[] = "Salut!";
	printf("Str = %s\n", str8);
	printf("\nReturn = %i\n\n", ft_str_is_printable(str8));
	printf("\nStr = %s\n", str9);
	printf("\nReturn = %i\n", ft_str_is_printable(str9));


	printf("\n******************\nEx07:\n\n");
	char str10[] = "aBc!";
	printf("Str = %s\n", str10);
	printf("\nReturn = %s\n\n", ft_strupcase(str10));
	

	printf("\n******************\nEx08:\n\n");
	char str11[] = "AbC!";
	printf("Str = %s\n", str11);
	printf("\nReturn = %s\n\n", ft_strlowcase(str11));
	
	
	printf("\n******************\nEx09:\n\n");
	char str12[] = "oi, TUDO bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("Str = %s\n", str12);
	printf("\nReturn = %s\n\n", ft_strcapitalize(str12));

	return (0);
}
