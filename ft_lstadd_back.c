/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:59:11 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 14:00:58 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstadd_back - Adds a new node at the end of the list.
 * @lst: A pointer to the first node of the list (passed as a pointer to 
 *       a pointer).
 * @new: The new node to be added at the end of the list.
 * 
 * This function adds the new node to the end of the linked list. If the list
 * is empty, the new node becomes the first node of the list. If the list is
 * not empty, the function traverses the list until the last node and links
 * the new node at the end.
 * 
 * Return: None. The function modifies the list directly.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
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
	
	ft_lstadd_back(&list, nod1);
	ft_lstadd_back(&list, nod2);
	
	while (list)
	{
		printf("%d\n", *(int *)list->content);
		list = list->next;
	}
	return (0);
}
*/
