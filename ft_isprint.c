/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:02:36 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/19 17:37:05 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		char i = av[1][0];
		if (ft_isprint(i))
			printf("Yes\n");
		else 
			printf("No\n");
	}
	return(0);
}
