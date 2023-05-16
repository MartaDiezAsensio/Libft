/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:22:28 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/16 20:00:03 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = NULL;
	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = (ft_strlen(s + start));
	str = (char *)malloc((len + 1) * sizeof(*s));
	if (str == NULL)
		return (0);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/*int	main()
{
	char s[] = "lorem ipsum dolor sit amet";
	unsigned int start = 0;
	size_t len = 10;
	printf("%s", ft_substr(s, start, len));
}*/