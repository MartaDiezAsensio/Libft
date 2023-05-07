/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:20:33 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/07 20:22:58 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int val, char *str, int base)
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
	str = malloc(dig + 1);
	str[dig] = '\0';
	dig--;
	while (dig >= 0)
	{
		str[dig] = (val % base) + '0';
		val /= base;
		dig--;
	}
	return (str);
}

int    main()
{
    int val = 5786345;
    char str[10];
    int base = 10;

    printf("%s", ft_itoa(val, str, base));
}
