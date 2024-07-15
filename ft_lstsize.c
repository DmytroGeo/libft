/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dima <dima@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:13:36 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/07/15 15:09:08 by dima             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current;

	count = 0;
	current = lst;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
/*
void    test(void)
{
	t_list *list1 = ft_lstnew("Node 1");
	t_list *list2 = ft_lstnew("Node 2");
	t_list *list3 = ft_lstnew("Node 3");

	list1->next = list2;
	list2->next = list3;
	list3->next = NULL;

	printf("Test 1 (3 nodes): %d (Expected: 3)\n", ft_lstsize(list1));
	printf("Test 2 (empty list): %d (Expected: 0)\n", ft_lstsize(NULL));
	t_list *single_node = ft_lstnew("Single Node");
	printf("Test 3 (1 node): %d (Expected: 1)\n", ft_lstsize(single_node));

	free(single_node);
	free(list1);
	free(list2);
	free(list3);
}

int main(void)
{
	test();
	return (0);
}
*/