/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/27 11:35:23 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/24 16:31:49 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Iterates the list ’lst’ and applies the function 
’f’ on the content of each node.

lst: The address of a pointer to a node.
f: The address of the function used to iterate on the list.*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;

	node = lst;
	while (node)
	{
		(*f)(node->content);
		node = node->next;
	}
}
