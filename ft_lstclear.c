/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstclear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:01:43 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/08 16:02:34 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstclear - Clears the entire list, deleting all nodes and freeing 
 *               their content.
 * @lst: A pointer to the pointer of the first node in the list.
 * @del: A function pointer to the function used to delete the content of 
 *       each node.
 *
 * This function iterates through each node in the list, deleting its content
 * using the function provided in `del`, and then freeing the memory allocated
 * for the node itself. After calling this function, the list will be empty,
 * and all dynamically allocated memory associated with the nodes will be freed.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst && del)
	{
		while (*lst)
		{
			temp = *lst;
			*lst = (*lst)->next;
			del(temp->content);
			free(temp);
		}
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
    
    t_list *list = node1;
    node1->next = node2;  // Conectar los nodos
    
    ft_lstclear(&list, del);
    
    if (list == NULL)
        printf("List cleared successfully.\n");

    return 0;
}
*/
