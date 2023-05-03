#include <unistd.h>
#include <stdio.h>

int	ft_strlcpy(char *dst, const char *src, int	dstsize)
{
	int	i;

	i = 0;
	while (i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[dstsize] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}