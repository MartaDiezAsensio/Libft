#include "libft.h"

void	printnstr(unsigned int n, char *str)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		printf("%c", str[i]);
		i++;
	}
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while(s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

int	main()
{
	char	s[] = "hello";

	ft_striteri(s, printnstr);
}