/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 16:14:55 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/10/26 13:43:11 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node. The memory of
’next’ must not be freed.

lst: The node to free.
del: The address of the function used to delete the content.*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst->content);
	free (lst);
}
