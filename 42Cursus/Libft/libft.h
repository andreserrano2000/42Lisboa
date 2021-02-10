#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct 	s_list
{
	size_t content_size;
} 				t_list;

void 	*ft_memset(void *b, int c, size_t len);
char 	*ft_strchr(const char *str, int c);
size_t 	ft_strlen(const char *str);

char 	*ft_substr(char const *s, unsigned int start, size_t len);
char 	*ft_strjoin(char const *s1, char const *s2);
char 	*ft_strtrim(char const *s1, char const *set);

char 	*ft_strncpy(char *dest, const char *src, size_t n);
#endif