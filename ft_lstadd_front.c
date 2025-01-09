/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:18:23 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:18:26 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstadd_front - Adds a new node at the beginning of the list.
 * @lst: A pointer to the first node of the list.
 * @new: The new node to be added at the front of the list.
 * 
 * This function modifies the list by setting the new node as the first
 * element of the list and links the rest of the list after it.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	int	num1 = 4;
	int	num2 = 5;
	
	t_list *nod1 = ft_lstnew(&num1);
	t_list *nod2 = ft_lstnew(&num2);
	
	t_list *list = NULL;
	
	ft_lstadd_front(&list, nod1);
	ft_lstadd_front(&list, nod2);
	
	while (list)
	{
		printf("%d\n", *(int *)list->content);
		list = list->next;
	}
	return (0);
}
*/
