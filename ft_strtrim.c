/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:22:24 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/15 19:21:37 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	flag;
	char	*str;
	char	*set2;

	i = 0;
	flag = 0;
	str = (char *)s1;
	set2 = (char *)set;
	while (*str)
	{
		if (ft_strchr(set2, *str))
			str++;
		else
			continue ;
	}
	i = ft_strlen(str);
	while (i > 0)
	{
		str = str + i;
		*(str + i) = 'o';
		printf("%s\n", str);
		if (!(ft_strchr(set2, *(str)) == NULL))
			str--;
		else
			return (str);
		i--;
	}
	return (str);
}

int	main()
{
	char	str[] = " He llo";
	char	set[] = " .";

	printf("%s", ft_strtrim(str, set));
}