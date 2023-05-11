/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:21:25 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/11 14:21:33 by mdiez-as         ###   ########.fr       */
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


int	ft_accurences(char *str, char ch)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			count++;
		i++;
	}
	return (count);
}

void	**mem_alloc(char *str, char ch)
{
	int		i;
	int		j;
	int		index;
	char	**ptr;

	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
		{
			j = 0;
			while (str[j] != ch)
				j++;
			ptr[index++] = (char *)malloc((j - 1) * sizeof(char) + 1);
		}
		i++;
	}
	return (ptr);
}


int main()
{
	int	rows;
	int cols;

	rows = 3;
	cols = 5;

	int *rw;
	int *co;

	rw = &rows;
	co = &cols;

	int **table;

	table = rows * cols;

}

/*int	main()
{
    char    s[] = "Hello How are you?";
    char    c = 'o';

    ft_split(s, c);
}*/