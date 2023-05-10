/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:20:54 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/10 15:01:35 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*aux;

	i = 0;
	aux = (unsigned char *)malloc(len * sizeof(char));
	if (!(aux))
		return (NULL);
	if (dst == NULL && src == NULL)
		return (0);
	while (i < len)
	{
		aux[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = aux[i];
		i++;
	}
	return (dst);
}

/*int	main()
{
	ft_memmove(((void *)0), ((void *)0), 5);
	memmove(((void *)0), ((void *)0), 5);
}*/