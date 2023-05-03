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

int main()
{
    char    s[] = "I am Marta";
    printf("%lu\n", ft_strlen(s));
	printf("%lu", strlen(s));
}