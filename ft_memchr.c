#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while ( i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (s);
		i++;
	}
	return (NULL);
}

int	main()
{
	char	s[] = "hello world";
	int		c = 'o';
	size_t n = 10;
	
	ft_memchr(s, c, n);
	printf("%s", &s);
}