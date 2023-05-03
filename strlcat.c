#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

int	ft_strlcat(char *dst, const char *src, int	dstsize)
{
	int	i;
	int	len_dst;

	i = 0;
	len_dst = ft_strlen(dst);
	if (dstsize == 0 || len_dst > dstsize)
		return (0);
	while (((i + len_dst) < dstsize) && (src))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + i);
}