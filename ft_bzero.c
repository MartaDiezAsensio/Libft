/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:20:00 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/08 11:43:29 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	
	i = 0;
	while (i < len)
	{
		((unsigned char*)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}*/

void	*ft_bzero(void *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)s)[i] = '\0';
		i++;
	}
	return (s);
}

/*int	main()
{
	char mem[] = "";
	ft_memset(mem, 'e', 5);
    ft_bzero(mem, 5);
    write(1, mem, 5);
}*/