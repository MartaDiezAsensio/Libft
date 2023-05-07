/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:20:44 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/07 20:23:03 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)s1) && ((unsigned char *)s2) && (i < (n - 1)) && (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]))
		i++;
	return (((const char *)s1)[i] - ((const char *)s2)[i]);
}

/*int main()
{
    char    s1[] = "hello";
    char    s2[] = "helpo";
	int		n = 3;

    printf("%d\n", ft_memcmp(s1, s2, n));	
}*/
