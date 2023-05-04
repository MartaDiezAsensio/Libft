#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char 			*str = (char *)malloc(len);

	i = 0;
	if (str == NULL)
		return (NULL);
	while (i < (len - 1))
	{
		str[i] = s[((size_t)start) + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main()
{
	char s[] = "hello hello";
	unsigned int start = 3;
	size_t len = 5;

	printf("%s", ft_substr(s, start, len));
}