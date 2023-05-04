#ifndef LIBFT
#define LIBFT

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t count, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);

size_t	ft_strlcat(char *dst, const char *src, size_t	dstsize);
size_t	ft_strlcpy(char *dst, const char *src, int	dstsize);
size_t ft_strlen(char *s);
int ft_strncmp(const char *s1, const char *s2, int n);
char	*ft_strnstr(char *haystack, char *needle, int len);
char	*ft_strrchr(char *s, int c);

int	ft_tolower(int ch);
int	ft_toupper(int ch);

#endif