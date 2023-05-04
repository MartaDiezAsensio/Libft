#include "libft.h"

/*int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}*/

char	*ft_strnstr(char *haystack, char *needle, int len)
{
	int	i;
	int	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 1;
	while (haystack[j] != '\0' && j < len)
	{
		while (needle[i] != '\0')
		{
			if (haystack[j + i] == needle[i])
			{
				count++;
				if (count == ft_strlen(needle))
					return (&haystack[j]);
			}
			i++;
		}
		i = 0;
		count = 0;
		j++;
	}
	return (NULL);
}

/*int	main()
{
	char	haystack[] = "I found the needle in the haystack";
	char	needle[] = "needle";
	int		len = 20;

	printf("%s\n", ft_strnstr(haystack, needle, len));
	printf("%s", strnstr(haystack, needle, len));
}*/
