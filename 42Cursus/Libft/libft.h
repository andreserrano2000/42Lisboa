#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef	struct	s_list
{
	size_t			content_size;
}	            t_list;

void *ft_memset(void *b, int c, size_t len);
int ft_strlen(char *str);


#endif