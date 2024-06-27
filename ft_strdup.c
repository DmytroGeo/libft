/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:19:22 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/25 15:03:06 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;
	
	i = 0;
	str = (char *)malloc((ft_strlen(s)+1)*sizeof(char));
	if (!str)
		return(NULL);
	else
		ft_memcpy(str, s, ft_strlen(s)+1);
	return(str);
}
