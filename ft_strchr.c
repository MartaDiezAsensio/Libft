/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:21:30 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/08 13:41:08 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int		i;

	i = 0;
	if (c == 0 || s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}

/*int	main()
{
	char	s[] = "hello gye";
	int		c = 'o';
	printf("%s\n", ft_strchr(s, c));
	printf("%s", strchr(s, c));
}*/