/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:20:33 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/09 21:45:33 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		dig;
	int		num;
	char	*str;

	dig = 0;
	num = n;
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		num /= 10;
		dig++;
	}
	if (n < 0)
	{
		str = (char *)malloc((dig + 2) * sizeof(char));
		str[0] = '-';
		str[dig + 1] = '\0';
		n = -n;
		while (dig > 0)
		{
			str[dig] = (n % 10) + '0';
			n /= 10;
			dig--;
		}
	}
	else
	{
		if (dig == 0)
		{
			str = (char *)malloc((dig + 2) * sizeof(char));
			str[dig + 1] = '\0';
			str[dig] = '0';
		}
		else
		{
			str = (char *)malloc((dig + 1) * sizeof(char));
			str[dig] = '\0';
			dig--;
			while (dig >= 0)
			{
				str[dig] = (n % 10) + '0';
				n /= 10;
				dig--;
			}
		}
	}
	free (str);
	return (str);
}

/*int    main()
{
    int val = 0;

    printf("%s", ft_itoa(val));
}*/
