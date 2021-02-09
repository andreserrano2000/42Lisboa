/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyze_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:23:59 by anserran          #+#    #+#             */
/*   Updated: 2020/11/08 18:49:57 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int 	check_first_2_lines(char **map)
{
	char	*charptr;
	int		a;

	charptr = map[0];
	while (*charptr != 0)
		charptr++;
	if (ft_strlen(map[0]) > 3 && *(charptr - 1) >= ' ' && *(charptr - 2) >= ' ' 
}
