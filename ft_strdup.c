#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlen(char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (i < ft_strlen(src))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char *ptr = (char *)malloc(ft_strlen(s1) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strcpy(ptr, s1);
	return (ptr);
}