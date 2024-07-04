/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:59:24 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/07/04 16:23:53 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ptrnbr(char const *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[n])
	{
		if (s[n] != c && s[n] != '\0')
		{
			i++;
			while (s[n] != c && s[n] != '\0')
				n++;
		}
		n++;
	}
	return (i);
}

char	*ft_malloccpy(size_t n, size_t len, char const *s)
{
	char	*ptr;

	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, &s[n - len], len);
	ptr[len] = '\0';
	return (ptr);
}

char	**ft_free(char **ptr, size_t k)
{
	size_t	j;

	j = 0;
	while (j <= k)
	{
		free(ptr[j]);
		j++;
	}
	free(ptr);
	return (NULL);
}

char	**ft_arrayfill(char **array, char const *s, char c)
{
	size_t	n;
	size_t	k;
	size_t	len;

	n = 0;
	k = 0;
	len = 0;
	while (s[n])
	{
		if (s[n] != c && s[n] != '\0')
		{
			while (s[n] != c && s[n] != '\0')
			{
				len++;
				n++;
			}
			array[k] = ft_malloccpy(n, len, s);
			if (array[k++] == NULL)
				return (ft_free(array, --k));
			len = 0;
		}
		n++;
	}
	array[k] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	array = malloc((ft_ptrnbr(s, c) + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	return (ft_arrayfill(array, s, c));
}
