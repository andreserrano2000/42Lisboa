/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 15:28:30 by anserran          #+#    #+#             */
/*   Updated: 2020/11/08 19:00:00 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_gridpack {
	int		height;
	int		width;
	char	empty;
	char	obstacle;
	char	sqrchr;
	char	**map;
	int		x_bsq;
	int		y_bsq;
}				t_gridpack;

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
int				ft_atoi(char *str);

char			**get_lines_from_grid(char *path_to_dict);
char			**check_map(char **map, int height);
int				get_number_of_lines(char **lines);
char			*ft_file_missing(void);
void			do_square(t_gridinfo mygrid);
char			**ft_split(char *str, char *charset);

#endif
