/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:09:40 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/27 13:53:26 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_intconvert(const char *nptr)
{
	int	n;
	size_t	k;

	k = 0;
	while (ft_isdigit(nptr[k]))
	{
		n = (10 * n) + (nptr[k] - 48);
		k++;
	}
	return(n);
}

int	ft_atoi(const char *nptr)
{
	int		n;

	n = 0;
	while (nptr[n])
	{
		if (ft_isspace(nptr[n]))
			n++;
		else if (nptr[n] == '-')
			return(-1 * ft_intconvert(nptr + n + 1));
		else if (ft_isdigit(nptr[n]))
			return(ft_intconvert(nptr + n));
		return(0);	
	}
	return(n);
}
