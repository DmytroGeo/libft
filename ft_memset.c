/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:45:40 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/12 20:32:12 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *str;
	str = s;
	while (n != 0)
	{
		n--;
		str[n] = c;
	}
	return(s);
}

int	main(void)
{
	char array[10]="hello";
	ft_memset(array, 'k', 7);
	printf("%s", array);
	return(0);
}
