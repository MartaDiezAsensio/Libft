/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:21:50 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/09 11:22:47 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(const char *s)
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
	size_t	j;
	size_t	len_dst;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	while ((j < dstsize) && (src[i] != '\0'))
	{
		dst[len_dst + i] = src[i];
		i++;
		j++;
	}
	dst[len_dst + i] = '\0';
	if (ft_strlen(src) > dstsize)
		return (ft_strlen(src)+ dstsize);
	else
		return (len_dst + i);
}

/*int	main()
{
	char	dest[15];
	
	dest[11] = 'a';
    printf("%lu", ft_strlcat(dest, "lorem", 15));
    write(1, "\n", 1);
    write(1, dest, 15);
}*/