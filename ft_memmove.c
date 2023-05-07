#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	aux[len];

	i = 0;
	while (i < len)
	{
		aux[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = aux[i];
		i++;
	}
	return (dst);
}

int	main()
{
	char	dst[] = "abcdefg";
	char	text[] = "abcdefg";
	size_t	n = 5;

	ft_memmove(dst, text, n);
}