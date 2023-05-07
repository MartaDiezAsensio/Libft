/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:21:15 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/07 20:23:14 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen(char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static char	*ft_itoa(int val, char *str, int base)
{
	int	dig;
	int	num;

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
}

void	ft_putnbr_fd(int n, int fd)
{
	char str[] = "12345";
	int	len;

	len = ft_strlen(ft_itoa(n, str, 10));
	write(fd, ft_itoa(n, str, 10) , len);
}

