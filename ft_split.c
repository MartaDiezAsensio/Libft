/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:21:25 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/05/16 18:31:06 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

// size_t	ft_strlcpy(char *dst, const char *src, int dstsize)
// {
// 	int	i;

// 	i = 0;
// 	while ((i < (dstsize - 1)) && (src[i] != '\0'))
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	if (i < dstsize)
// 		dst[i] = '\0';
// 	return (ft_strlen(src));
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*str;

// 	str = NULL;
// 	if (!s)
// 		return (0);
// 	if (ft_strlen(s) < start)
// 		len = 0;
// 	if (ft_strlen(s + start) < len)
// 		len = (ft_strlen(s + start));
// 	str = (char *)malloc((len + 1) * sizeof(char));
// 	if (str == NULL)
// 		return (0);
// 	ft_strlcpy(str, s + start, len + 1);
// 	return (str);
// }

/********************************************************/

static int	count_rows(const char *str, char c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			i++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (i);
}

static int	count_cols(char const *str, char c, int i)
{
	int	len;

	len = 0;
	while (str[i] != c && str[i])
	{
		len++;
		i++;
	}
	return (len);
}

static void	ft_free(char **arr, int j)
{
	while (j-- > 0)
		free(arr[j]);
	free(arr);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		words;
	char	**arr;

	i = 0;
	j = -1;
	words = count_rows(str, c);
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!(arr))
		return (NULL);
	while (++j < words)
	{
		while (str[i] == c)
			i++;
		arr[j] = ft_substr(str, i, count_cols(str, c, i));
		if (!(arr[j]))
		{
			ft_free(arr, j);
			return (NULL);
		}
		i += count_cols(str, c, i);
	}
	arr[j] = 0;
	return (arr);
}

// int main()
// {
//   char  *str = "Hola que tal";
//   char  c = ' ';

//   char	**arr = ft_split(str, c);
//   int i = 0;

//   while (i < count_rows(str, c))
//   {
// 	printf("%s\n", arr[i]);
// 	i++;
//   }
// }