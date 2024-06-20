/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:14:42 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/12 20:16:10 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return(1);
	return(0);
}
/*
int	main(int ac, char **av)
{
	if (ac > 1)
	{
		char i = av[1][0];
		if (ft_isdigit(i))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return(0);
}
*/
