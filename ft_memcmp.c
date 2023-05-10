/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:20:44 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/10 15:00:33 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((str1) && (str2) && (i < (n - 1)) && (*str1 == *str2))
	{
		str1++;
		str2++;
		i++;
	}
	return (*str1 - *str2);
}

/*int main()
{
    char    s1[] = "zyxbcdefgh";
    char    s2[] = "abcdefgxyz";
	int		n = 0;

    printf("%d\n", ft_memcmp(s1, s2, n));
	printf("%d\n", memcmp(s1, s2, n));	
}*/
