/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:41:56 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/12 15:53:05 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return(1);
	return(0);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		char i = av[1][0];
		if (ft_isascii(i))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return(0);
}
