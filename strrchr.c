#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char ch;
	int	i;

	ch = c + '0';
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return (s[i]);
		i++;
	}
	if (s[i] == '\0')
		return (s[i]);
}