/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:21:25 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/10 14:56:25 by mdiez-as         ###   ########.fr       */
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


char	**ft_split(char *s, char c)
{
	char	*arr[2];
	char	**array;

	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	while (s[i] != c)
		i++;
	arr[0] = (char *)malloc(i * sizeof(char) + 1);
	arr[1] = (char *)malloc((len - i) * sizeof(char) + 1);
	while (j < i)
	{
		arr[0][j] = s[j];
		j++;
	}
	arr[0][j] = '\0';
	i = 0;
	while ((i + j) < len)
	{
		arr[1][i] = s[i + j];
		i++;
	}
	arr[1][i] = '\0';
	array = arr;
	return(array);
}

/*int	main()
{
    char    s[] = "HelloBye";
    char    c = 'o';

    ft_split(s, c);
}*/