/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:21:41 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/07 20:23:25 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	printnstr(unsigned int n, char *str)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		printf("%c", str[i]);
		i++;
	}
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while(s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*int	main()
{
	char	s[] = "hello";

	ft_striteri(s, printnstr);
}*/