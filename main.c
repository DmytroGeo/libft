/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:08:52 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/07/01 15:55:16 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <fcntl.h>

/*
char	ft_toupper2(unsigned int i, char c)
{
	return(c + (i * i));
}

*/

void	ft_toupper3(unsigned int i, char *c)
{
	*c = *c + i;
}
	
int	main(void)
{
//	char dst1[100]="hello";
//	char dst2[100]="hello";
//	size_t	i = 0;
//	char const src1[100]="-2147483648";
//	char src1[100]="goodbye";
//	const char set[100]="a";
//	int	*ptr;
//	size_t	len = 13;
//	size_t	nmemb  = 5;
//	unsigned int start = 0;
//	ptr = (int*)ft_calloc(nmemb, size);
	
//	for strchr:
/*	printf("%s \n", strchr(src1, '\0'));
	printf("%s \n", ft_strchr(src2, '\0'));
*/

//	for strrchr:
/*	printf("%s \n", strrchr(array, 'd'));
	printf("%s \n", ft_strrchr(brray, 'd'));	
*/

//	for strncmp:
/*	printf("%d \n", ft_strncmp(array, brray, 20));
	printf("", strncmp(arrayl brray, 20);
*/
	
//	for memchr:
/*	printf("%p \n", memchr(src1, 'd', 4));
	printf("%p \n", ft_memchr(src1, 'd', 4));
*/

//	for srlcpy:
/*	printf("%d \n", strlcpy(dst1, src1, i));
	printf("%s \n", dst1);
	printf("%d \n", ft_strlcpy(dst2, src2, i));
	printf("%s \n", dst2);
*/

//	for strlcat:	
/*	printf("%d \n", strlcat(dst1, src1, i));
	printf("%s \n", dst1);
	printf("%d \n", ft_strlcat(dst2, src2, i));
	printf("%s \n", dst2);
*/

//	for memcpy:
/*	ft_memcpy(dst1, src1, 14);
	memcpy(dst2, src1, 14);
	printf("%s \n", dst1);
	printf("%s", dst2);
*/
	
//	for memcmp:
/*	printf("%d \n", memcmp(src1, src2, i));
	printf("%d \n", ft_memcmp(src1, src2, i));
*/
	
//	for strnstr:
/*
	printf("%s", ft_strdup("hello"));
{
	printf("%lu", ft_strlen2("hello"));
	return(0);
}
*/
/*	printf("%s \n", strnstr(src1, src2, i));
	printf("%s \n", ft_strnstr(src1, src2, i));
*/

//	for atoi:
/*	printf("%d \n", atoi(src1));
	printf("%d \n", ft_atoi(src1));
*/	


//	for calloc:
/*	printf("%p \n", calloc(nmemb, size));
	printf("%p \n", ft_calloc(nmemb, size));
*/

//	another calloc test:
//	char	*k;
/*	while (i < nmemb)
	{
		printf("%d, ", ptr[i]);
		i++;
	}	
*/	

//	for strdup:
/*	printf("%s \n", strdup("hello"));
	printf("%s \n", ft_strdup("hello"));
*/

//	for substr:
//	printf("%s \n", ft_substr(src2, start, len));

//	for strjoin:
//	printf("%s \n", ft_strjoin(src1, src2));
	
//	for strtrim;
//	printf("%s \n", ft_strtrim(s1, set));

//	for bzero:
/*	bzero(array, 2);	
		ptr = (char *)malloc((k + 2) * sizeof(char));
	ft_bzero(brray, 2);
	printf("%s \n", array);
	printf("%s \n", brray);
*/
//	for ft_itoa:
//	printf("%s", ft_itoa(0));


/*
	char const s[6]="hello";
	printf("%s \n", ft_strmapi(s, ft_toupper2));
*/

	char array[7] = "hello";
	ft_striteri(array, ft_toupper3);
	printf("%s", array);
	return(0);
}
