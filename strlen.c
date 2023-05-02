#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

/*int main()
{
    char    s[] = "I am Marta";
    printf("%d", ft_strlen(s));
}*/