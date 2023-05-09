/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:21:15 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/09 22:11:17 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	len;

	len = ft_strlen(ft_itoa(n));
	write(fd, ft_itoa(n) , len);
}

void	ft_putnbr_fd(int n, int fd)
{
}

