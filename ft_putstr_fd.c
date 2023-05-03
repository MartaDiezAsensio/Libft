#include <unistd.h>
#include <stdio.h>
size_t ft_strlen(char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

void    ft_putstr_fd(char *s, int fd)
{
    int len;

    len = ft_strlen(s);
    write(fd, s, len);
}