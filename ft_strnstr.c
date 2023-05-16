/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:22:14 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/16 19:45:42 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	count;

// 	j = 0;
// 	if (ft_strlen(needle) == 0)
// 		return ((char *)haystack);
// 	while (haystack[j] != '\0' && j < len)
// 	{
// 		i = 0;
// 		count = 0;
// 		while (needle[i] != '\0' && ((j + i) < len))
// 		{
// 			if (haystack[j + i] == needle[i])
// 			{
// 				count++;
// 				if (count == ft_strlen(needle))
// 					return ((char *)&haystack[j]);
// 			}
// 			else
// 				break ;
// 			i++;
// 		}
// 		j++;
// 	}
// 	return (NULL);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	size_t	j;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && (i + needle_len) <= len)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char	haystack[] = "see FF your FF";
// 	char	needle[] = "see FF your FF";
// 	int		len = 40;

// 	printf("%s\n", ft_strnstr(haystack, needle, len));
// 	printf("%s", strnstr(haystack, needle, len));
// }