/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:18:47 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:18:51 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstsize - Computes the size of the linked list.
 * @lst: Pointer to the first node of the list.
 * 
 * This function traverses the entire linked list and counts the number
 * of nodes in it. It returns the total number of nodes, or 0 if the
 * list is empty.
 * 
 * Return: The size of the list (number of nodes).
 */
int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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

	int size = ft_lstsize(list);  // Debe devolver 2
	printf("Size of list: %d\n", size);

	return (0);
}
*/
