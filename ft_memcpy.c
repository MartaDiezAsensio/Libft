/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:20:49 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/07 20:23:04 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	printf("%s", dst);
	return (dst);
}

/*int	main()
{
	char	dst[20];
	char	*src;
	char	text[] = "hellohello";
	size_t	n = 8;

	src = text;
	ft_memcpy(dst, src, n);
}*/