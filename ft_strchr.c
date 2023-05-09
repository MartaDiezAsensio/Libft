/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:21:30 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/09 18:01:22 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return (0);
}

/*int	main()
{
	char	s[] = "dfdgg";
	int		c = '\0';
	printf("%s\n", ft_strchr(s, c));
	printf("%s", strchr(s, c));
}*/