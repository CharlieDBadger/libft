/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:25:35 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 15:29:29 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstdelone - Deletes a node from the list and frees its content.
 * @lst: The node to be deleted.
 * @del: A pointer to the function used to delete the content of the node.
 *
 * This function frees the content of the specified node using the
 * provided 'del' function and then frees the node itself. After
 * calling this function, the node is removed from the list and 
 * both its content and memory are released.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*
void del(void *content)
{
    free(content);
}

#include <stdio.h>

int main(void)
{
    char *str1 = (char *)malloc(10 * sizeof(char));
    char *str2 = (char *)malloc(10 * sizeof(char));
    
    snprintf(str1, 10, "Node 1");
    snprintf(str2, 10, "Node 2");
    
    t_list *node1 = ft_lstnew(str1);
    t_list *node2 = ft_lstnew(str2);
    
    ft_lstdelone(node1, del);

    if (node1 == NULL)
        printf("node1 eliminado correctamente\n");

    return 0;
}
*/
