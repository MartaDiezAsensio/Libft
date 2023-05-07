/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:22:04 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/07 21:01:57 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str = (char *)malloc(ft_strlen(s) * sizeof(char));

	i = 0;
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	free(str);
	return (str);
}

/*int	main()
{
	char	s[] = "hello";

	ft_strmapi(s, printnstr);
}*/