#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

/*int main()
{
	char	num[] = "-12345";

	printf("%d\n", ft_atoi(num));
	printf("%d\n", atoi(num));
}*/