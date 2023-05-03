#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strchr(char *s, int c)
{
	int		i;

	i = 0;
	if (c == 0 || s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}

/*int	main()
{
	char	s[] = "hello world";
	int		c = 'o';
	printf("%s\n", ft_strchr(s, c));
	printf("%s", strchr(s, c));

	return (0);
}*/