/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:16:11 by anserran          #+#    #+#             */
/*   Updated: 2020/11/01 16:13:09 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_org(char *str);
void	ft_design(char stra, char strb, char strc, char strd, char *str);

int ft_fazcoisas(char *str)
{
	int i;
	int test;
	
	test = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (test == 0)
			if (str[i] >= '1' && str[i] <= '4')
			{
				i++;
				test = 1;
			}
			else
			{
				write(1, "ErrorChar\n", 11);
				return (0);
			}
		else 
			if (str[i] == 32)
			{
			i++;
			test = 0;
			}
			else
			{
				write(1, "ErrorChar\n", 11);
				return (0);
			}
	}
	if (i == 31)
		ft_org(str);
	else
		write(1, "NOT31\n", 6);
	return (0);
}
void	ft_org(char *str)
{
	int i;
	char stra[3];
	char strb[3];
	char strc[3];
	char strd[3];

	i = 0;
	while (i < 7)
	{
		stra[i] = str[i];
		i = i + 2;
	}
	while (i < 15)
	{
		strb[i] = str[i];
		i = i + 2;
	}
	while (i < 23)
	{
		strc[i] = str[i];
		i = i + 2;
	}
	while (i < 31)
	{
		strd[i] = str[i];
		i = i + 2;
	}
	ft_design(stra, strb, strc, strd, str);
}

void	ft_design(char stra, char strb, char strc, char strd, char *str)
{
	int x;
	int y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{

			x++;
		}
		y++;
		write(1,"\n", 1);

	}

}
int main(int argc, char **argv)
{
	if (argc == 2)
		ft_fazcoisas(argv[1]);
	else
		write(1, "Error\n", 6);
	return (0);
}
