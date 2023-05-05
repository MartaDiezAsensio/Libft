#include <unistd.h>

int	ft_isprint(int c)
{
	if (c <= 31 || c == 127)
		return (0);
	else
		return (1);
}