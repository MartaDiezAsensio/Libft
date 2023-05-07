/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:21:36 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/07 20:23:23 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen(char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (i < ft_strlen(src))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char *ptr = (char *)malloc(ft_strlen(s1) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strcpy(ptr, s1);
	return (ptr);
}