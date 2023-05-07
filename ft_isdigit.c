/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:20:23 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/07 21:35:35 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	dig;
	int	val;
	int	res;

	dig = 0;
	val =c ;
	res = 0;
	while (c > 0)
	{
		c = c / 10;
		dig ++;
	}
	while (val > 0)
	{
		if ((val%10) >= 0 && (val%10) <= 9)
			res = 0;
		else 
			return (1);
		val /= 10;
	}
	return (res);
}

/*int	main()
{
	//int	c = 0;
	int i = 'A';
    while (i <= 'Z')
    {
        printf("%d", ft_isdigit(i));
        i++;
    }
}*/