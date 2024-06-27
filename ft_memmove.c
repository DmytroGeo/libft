/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:27:11 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/20 12:11:14 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned const char	*s;
	size_t	k;

	k = 0;
	s = src;
	d = dest;
	if (src >= dest)
	{
		while (k < n)
		{
			d[k]=s[k];
			k++;
		}
	}
	else if (src < dest)
	{
		while (n != 0)
		{
			n--;
			d[n]=s[n];
		}	
	}
	return(dest);	
}
int	main(void)
{
	char	dest[100]="12345";
	char	dest2[100]="12345";
	memmove(dest, dest + 2, 3);
	ft_memmove(dest2, dest2 + 2, 3);
	printf("%s \n", dest);
	printf("%s \n", dest2);
	return(0);
}
