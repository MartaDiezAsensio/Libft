#include "libft.h"

static size_t ft_strlen(char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static char	printnstr(unsigned int n, char c)
{
	printf("%c", c + n);
	return (c + n);
}

char *ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str = (char *)malloc(ft_strlen(s) * sizeof(char));

	i = 0;
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	free(str);
	return (str);
}

int	main()
{
	char	s[] = "hello";

	ft_strmapi(s, printnstr);
}