/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:13:51 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/23 13:59:53 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	n;
	char *str;
	
	str = (char*)s;
	n = 0;
	if (c == '\0')
		return(str + ft_strlen(str));
	else
	{
		while(str[n] != '\0')
		{
			if(str[n] == c)
				return(str + n);
			n++;
		}
		return(NULL);
	}
}
