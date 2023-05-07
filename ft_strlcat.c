/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:21:50 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/07 20:42:05 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t	dstsize)
{
	size_t	i;
	size_t	len_dst;

	i = 0;
	len_dst = ft_strlen(dst);
	if (dstsize == 0)
		return (0);
	while ((dst) && (src[i] != '\0'))
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	dst[dstsize + i] = '\0';
	return (dstsize + i);
}

/*int	main()
{
	char	dst[] = "hello hello";
	char	src[] = "bye";
	int		dstsize = 2;

	printf("%lu\n", ft_strlcat(dst, src, dstsize));
	printf("%lu", strlcat(dst, src, dstsize));
}*/