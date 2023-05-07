/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:21:46 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/07 20:48:36 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char *s2)
{
	size_t	ls1;
	size_t	ls2;
	size_t	i;
	size_t	j;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	i = 0;
	j = 0;
	char	*str = (char *)malloc(ls1 + ls2 + 1);
	if (str == NULL)
		return (NULL);
	while (i < (ls1 + ls2))
	{
		if (i < ls1)
			str[i] = s1[i];
		else if (i >= ls1)
		{
			str[i] = s2[j];
			j++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main()
{
	char s1[] = "hello";
	char s2[] = " bye";

	printf("%s", ft_strjoin(s1, s2));
}*/