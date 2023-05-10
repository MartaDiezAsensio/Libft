/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:20:23 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/10 15:17:44 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	val;
	int	res;

	val = c ;
	res = 0;
	if (val >= '0' && val <= '9')
		res = 1;
	else
	{
		while (val > 0)
		{
			if ((val % 10) >= 0 && (val % 10) <= 9)
				res = 0;
			else
				res = 1;
			val /= 10;
		}
	}
	return (res);
}

/*int	main()
{
	int i = '0';
    while (i <= '9')
    {
        printf("%d", ft_isdigit(i));
        i++;
    }
}*/