#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *str);
void	*ft_bzero(void *s, size_t len);
void	*ft_calloc(size_t count, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);

char	*ft_itoa(int val, char *str, int base);
void	*ft_memchr(void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char **ft_split(char *s, char c);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(char *s1);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strjoin(char const *s1, char *s2);


size_t	ft_strlcat(char *dst, const char *src, size_t	dstsize);
size_t	ft_strlcpy(char *dst, const char *src, int	dstsize);
size_t ft_strlen(const char *s);
char *ft_strmapi(char *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *s1, const char *s2, int n);
char	*ft_strnstr(char *haystack, char *needle, int len);
char	*ft_strrchr(char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);

int	ft_tolower(int ch);
int	ft_toupper(int ch);

#endif