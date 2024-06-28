/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:55:26 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/06/28 15:41:07 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n > 0 && n <= INT_MAX)
	{
		while (n != 0)
		{
			n = n / 10;
			len++;
		}
	}
	else if (n < 0 && n > INT_MIN)
		return (ft_nbrlen((-1) * n));
	else if (n == INT_MIN)
		return (10);
	else
		return (0);
	return (len);
}

char	*ft_charconvert(char *ptr, int n, size_t sign, size_t len)
{
	ptr[len + sign] = '\0';
	while (len + sign != sign)
	{
		len--;
		ptr[len + sign] = (n % 10) + 48;
		n = n / 10;
	}
	if (sign == 1)
		ptr[0] = '-';
	return (ptr);
}

size_t	ft_sign(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;
	size_t	sign;
	int		i;

	sign = ft_sign(n);
	len = ft_nbrlen(n);
	i = ((-2) * sign + 1);
	ptr = (char *)malloc((len + 1 + sign) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (n == INT_MIN)
		return ("-2147483648");
	return (ft_charconvert(ptr, i * n, sign, len));
}
