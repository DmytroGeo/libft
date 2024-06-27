/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:25:23 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/12 15:37:37 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return(1);
	return(0);
}

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return(1);
	return(0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return(1);
	return(0);	
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		char i = av[1][0];
		if (ft_isalnum(i))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return(0);
}