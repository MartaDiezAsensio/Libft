#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	printf("%s", dst);
	return (dst);
}

int	main()
{
	char	dst[20];
	char	*src;
	char	text[] = "hellohello";
	size_t	n = 8;

	src = text;
	ft_memcpy(dst, src, n);
}