/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:22:24 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/14 18:54:13 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (i < ft_strlen(set))
	{
		if (s1[index] == set[i])
			index++;
		i++;
	}
	printf("%i", index);
	

}