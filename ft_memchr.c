/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:20:36 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/07 20:59:45 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while ( i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (s);
		i++;
	}
	return (NULL);
}

/*int	main()
{
	char	s[] = "hello world";
	int		c = 'o';
	size_t n = 10;
	
	ft_memchr(s, c, n);
	printf("%s", &s);
}*/