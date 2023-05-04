#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_bzero(void *s, size_t len)
{
	size_t	i;
	
	i = 0;
	while (i < len)
	{
		((unsigned char*)s)[i] = '0';
		i++;
	}
	return (s);
}

/*int	main()
{
	char s[20];
	size_t n = 8;

	ft_bzero(s, n);
}*/