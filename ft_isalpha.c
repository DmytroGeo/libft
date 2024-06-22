/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:48:08 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/12 14:43:31 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return(1);
	return(0);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		char i = av[1][0];
		if (ft_isalpha(i))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return(0);
}
