/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:20:00 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/07 20:22:43 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)s)[i] = '0';
		i++;
	}
	return (s);
}

/*int	main()
{
	char s[20];
	size_t n = 8;

	ft_bzero(s, n);
}*/