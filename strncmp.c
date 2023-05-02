#include <unistd.h>
#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while ((s1) && (s2) && (s1[i] == s2[i]))
        i++;
    return (s1[i] - s2[i]);
}

/*int main()
{
    char    s1[] = "da";
    char    s2[] = "cb";

    printf("%d", ft_strcmp(s1, s2));
}*/