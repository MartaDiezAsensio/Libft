/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:22:19 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/09 18:08:20 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*res;
	int		i;

	i = 0;
	res = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			res = &s[i];
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	return (res);
}
 

/*int	main()
{
	char	s[] = "hello world";
	int		c = 'f';
	printf("%s\n", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));
}*/