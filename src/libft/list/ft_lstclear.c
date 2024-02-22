/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 16:53:55 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/10/26 13:36:43 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Deletes and frees the given node and every
successor of that node, using the function ’del’ and free(3).
Finally, the pointer to the list must be set to NULL.

lst: The address of a pointer to a node.
del: The address of the function used to delete the content of the node.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current_node;
	t_list	*next_node;

	if (lst == NULL || *lst == NULL)
		return ;
	current_node = *lst;
	while (current_node->next != NULL)
	{
		next_node = current_node->next;
		ft_lstdelone(current_node, del);
		current_node = next_node;
	}
	ft_lstdelone(current_node, del);
	*lst = NULL;
}
