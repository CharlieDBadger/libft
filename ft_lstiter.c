/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:26:28 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 16:27:21 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstiter - Iterates through a linked list and applies a function to the
 *              content of each node.
 * @lst: Pointer to the first node of the list.
 * @f: Function pointer to apply to the content of each node.
 * 
 * Description: This function traverses the linked list starting from the node
 *              pointed to by @lst. For each node, it applies the function @f
 *              to the content of the node. The list itself remains unchanged,
 *              but the content of each node can be modified depending on the
 *              implementation of @f.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (lst && f)
	{
		while (lst)
		{
			temp = lst;
			f(temp->content);
			lst = lst->next;
		}
	}
}
/*
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *node3 = ft_lstnew("Node 3");

	node1->next = node2;
	node2->next = node3;

	ft_lstiter(node1, print_content);

	return 0;
}
*/
