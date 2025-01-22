/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:18:36 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 13:18:38 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstnew - Creates a new node for a linked list.
 * @content: Pointer to the content to be stored in the new node.
 * 
 * Return: A pointer to the newly created node. If memory allocation fails,
 *         returns NULL.
 * 
 * Description: Allocates memory for a new node of type t_list and initializes
 *              its fields. The 'content' field is set to the provided content,
 *              and the 'next' field is initialized to NULL, as the node is not
 *              yet linked to any other nodes.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
#include <stdio.h>

int	main(void)
{
	int	num = 5;
	t_list	*node = ft_lstnew(&num);
	
	printf("Contenido del nodo: %d\n", *(int *)(node->content));
	return (0);
}
*/
