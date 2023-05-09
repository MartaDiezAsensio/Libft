/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:20:08 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/09 20:04:09 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	ptr = (size_t*)malloc(count * size * sizeof(size_t));
	if (ptr == NULL)
		return (NULL);
	while ( j < size * count)
	{
		ptr[j] = 0;
		j++;
	}
	ptr[j] = 0;
	return (ptr);
}

/*int main()
{
  size_t count = 4;
  size_t size = 2;
  
  ft_calloc(count, size);
  calloc(count, size);
}*/