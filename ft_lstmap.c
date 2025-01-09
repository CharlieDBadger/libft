/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:02:28 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 17:04:43 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstmap - Creates a new list by applying a function to each element
 *             of an existing list. If an allocation fails, it clears
 *             the created list using the given delete function.
 * @lst: Pointer to the first node of the original list.
 * @f: Function to apply to the content of each node.
 * @del: Function to delete content if memory allocation fails.
 * 
 * Return: A new list where each node's content is the result of applying
 *         the function 'f' to the content of the corresponding node in 'lst'.
 *         Returns NULL if an error occurs during memory allocation.
 */
t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
