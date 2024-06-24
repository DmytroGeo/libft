/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:15:19 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/24 13:44:47 by dgeorgiy         ###   ########.fr       */
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
/*
size_t ft_strlen2(const char *s)
{
	if (s[0] == '\0')
		return(0);
	return(1 + ft_strlen2(s+1));
}
*/
/*int	main(void)
{
	printf("%lu", ft_strlen2("hello"));
	return(0);
}
*/
