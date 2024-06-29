/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:07:00 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/28 16:19:21 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			k;
	unsigned char	*str;

	k = 0;
	str = (unsigned char *)s;
	while (k < n)
	{
		if (str[k] == c)
			return (str + k);
		k++;
	}
	return (NULL);
}
