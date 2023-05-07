/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:48:46 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/07 20:48:48 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, int	dstsize)
{
	int	i;

	i = 0;
	while (i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[dstsize] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

/*int	main()
{
	char	dst[] = "hello world";
	char	src[] = "bye hello hello";
	int		dstsize = 10;

	printf("%lu\n", ft_strlcpy(dst, src, dstsize));
	printf("%lu", strlcpy(dst, src, dstsize));
}*/