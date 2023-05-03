#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	size_t	ptr[n];

	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
	s = &ptr;
	i = 0;
	/*while (i < n)
	{
		printf("%lu\n", ptr[i]);
		i++;
	}*/
}

/*int	main()
{
	char s[20];
	size_t n = 8;

	ft_bzero(s, n);
}*/