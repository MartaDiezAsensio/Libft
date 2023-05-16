/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:22:14 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/16 18:17:14 by mdiez-as         ###   ########.fr       */
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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[j] != '\0' && j < len)
	{
		count = 0;
		while (needle[i] != '\0' && ((j + i) < len))
		{
			if (haystack[j + i] == needle[i])
			{
				count++;
				if (count == ft_strlen(needle))
					return ((char *)&haystack[j]);
			}
			i++;
		}
		i = 0;
		j++;
	}
	return (NULL);
}

/*int	main()
{
	char	haystack[] = "see FF your FF";
	char	needle[] = "see FF your FF";
	int		len = 40;

	printf("%s\n", ft_strnstr(haystack, needle, len));
	printf("%s", strnstr(haystack, needle, len));
}*/