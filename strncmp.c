#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, int n)
{
    int i;

    i = 1;
    while ((s1) && (s2) && (i < (n - 1)) &&(s1[i] == s2[i]))
        i++;
    return (s1[i] - s2[i]);
}

/*int main()
{
    char    s1[] = "hello";
    char    s2[] = "helpo";
	int		n = 3;

    printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));
}*/