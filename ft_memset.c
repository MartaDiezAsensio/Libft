#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	
	i = 0;
	while (i < len)
	{
		((unsigned char*)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*int	main()
{
	char b[20];
	int	c = 'a';
	size_t len = 2;

	ft_memset(b, c, len);
}*/
