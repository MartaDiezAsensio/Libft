/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:21:25 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/07 20:34:21 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

void *ft_bzero(void *s, size_t len)
{
	size_t	i;
	
	i = 0;
	while (i < len)
	{
		((unsigned char*)s)[i] = '0';
		i++;
	}
	return (s);
}

char **ft_split(char *s, char c)
{
	size_t	i;
	size_t	pos;
	char	**str;

	i = 0;
	pos = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
			pos = i;
		i++;
	}
	*str[0] = (char)malloc(pos);
	*str[1] = (char)malloc(ft_strlen(s) - pos);

	printf("%zu", pos);


	free(str);
	return (str);
}

int	main()
{
	char	s[] = "HelloBye";
	char	c = 'o';

	ft_split(s, c);
}*/