/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:43:00 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/29 10:15:13 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (s[n] != '\0')
		n++;
	return (n);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	n;

	str = (char *)s;
	n = ft_strlen(str) - 1;
	if (c == '\0')
		return (str + n + 1);
	else
	{
		while (n != 0)
		{
			if (str[n] == c)
				return (str + n);
			n--;
		}
		return (NULL);
	}
}
