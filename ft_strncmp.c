/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:22:09 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/10 11:57:18 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	i;

	i = 0;
	if ( n == 0)
		return (0);
	while ((s1[i]) && (s2[i]) && (i < n - 1) && (s1[i] == s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main()
{
    char    s1[] = "test\200";
    char    s2[] = "test\0";
	int		n = 6;

    printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));
}*/