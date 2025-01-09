/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:48:30 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:50:47 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstlast - Returns the last node of the list.
 * @lst: Pointer to the first node of the list.
 * 
 * This function traverses the linked list and returns the last node.
 * If the list is empty, it returns NULL.
 * 
 * Return: A pointer to the last node, or NULL if the list is empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int main(void)
{
	int num1 = 4;
	int num2 = 5;

	t_list *nod1 = ft_lstnew(&num1);
	t_list *nod2 = ft_lstnew(&num2);

	t_list *list = NULL;

	ft_lstadd_front(&list, nod1);
	ft_lstadd_front(&list, nod2);

	t_list *last = ft_lstlast(list);

	printf("Last node content: %d\n", *(int *)last->content);

	return (0);
}
*/
