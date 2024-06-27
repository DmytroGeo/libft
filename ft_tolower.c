/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:17:58 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/12 18:22:04 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return(c + 32);
	return(c);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		char i = av[1][0];
		printf("%c", ft_tolower(i));
	}
	return(0);
}
