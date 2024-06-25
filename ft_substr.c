/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:37:13 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/25 19:26:46 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	n;

	str = (char *)malloc((len + 1) * sizeof(char));
	n = 0;
	if (!str)
		return (NULL);
	while (n < len)
	{
		str[n] = s[start + n];
		n++;
	}
	str[n] = '\0';
	return (str);
}
