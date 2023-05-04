#include "libft.h"

char    *ft_itoa(int val, char *str, int base)
{
    int    dig;
    int    num;

    dig = 0;
    num = val;
    while (num > 0)
    {
        num /= base;
        dig++;
    }
	dig--;
    str = malloc(dig + 1);
    while (dig >= 0)
    {
        str[dig] = (val % base) + '0';
        val /= base;
        dig--;
    }
    return (str);
	free(str);
}

/*int    main()
{
    int val = 5786345;
    char str[10];
    int base = 10;

    printf("%s", ft_itoa(val, str, base));
}*/
