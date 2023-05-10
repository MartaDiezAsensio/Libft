/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:20:08 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/10 14:49:25 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (char *)malloc(count * size);
	if (!(ptr))
		return (NULL);
	return (ft_memset(ptr, 0, size * count));
}

/*int main()
{
  size_t count = 4;
  size_t size = 2;
  
  ft_calloc(count, size);
  calloc(count, size);
}*/