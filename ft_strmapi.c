/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:27:04 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/07/01 14:48:31 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*ptr;

	ptr = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	len = ft_strlen(s);
	if (ptr == NULL)
		return (NULL);
	while (i != len)
	{
		ptr[i] = (f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
