/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 15:27:00 by anserran          #+#    #+#             */
/*   Updated: 2020/11/08 18:23:00 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	process_file(t_gridpack grids, char *filename)
{
	char *charptr;

	if (!(grids.map = check_map(get_lines_from_grid(filename), grids.height)))
	{
		error("map error\n");
		return ;
	}
	charptr = grids.map[0];
	while (*charptr)
		charptr++;
	grids.sqrchr = *(charptr - 1);
	grids.empty = *(charptr - 3);
	do_square(grids);
}

void	count_dots( int file, char *filename)
{
	t_gridpack	grids;
	char		a;
	char		temp;
	char		prev_a;

	a = 0;
	prev_a = 0;
	while (a!= '\n' && read(file, &a, 1))
			;
	grids.width = 0;
	grids.height = 1;
	while (read(file, &a, 1))
	{
		if (grids.height == 1 && a != '\n')
			grids.width++;
		if (a == '\n')
			grids.height++;
		prev_a = temp;
		temp = a;
	}
	close(file);
	if (a == '\n' && prev_a != '\n' && prev_a != '\0')
		process_file(grids, filename);
	else
		error("map error\n");
}

void 	analyze_file(char *filename)
{
	int	file;

	if ((file = open(filename, O_RDONLY)) < 0)
		error("map error\n");
	else
		count_dots(file, filename);
}

int 	main(int argc, char *argv[])
{
	int a;

	a = 1;
	if (argc == 1)
		analyze_file(ft_file_missing());
	while (argc > a)
	{
		analyze_file(argv[a]);
		if (argc - 1 > a)
			ft_putchar('\n');
		a++;
	}
	return (0);
}
