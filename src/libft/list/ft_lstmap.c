/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/27 11:43:32 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/10/27 14:57:04 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* First check is to check if there is a list. If not NULL will be returned.
 * After that the new list is initiated. As long as 'lst' exists we will 
 * apply the function 'f' on the content. And if succesful it will create a
 * new node in the 'new_lst'. When the allocation of the new node fails
 * the list will be cleared with 'ft_lstclear', whichc uses function 'del'.
 * 
 * lst: The address of a pointer to a node.
 * f: The address of the function used to iterate on the list.
 * del: The & of the function used to delete the content of a node if needed.*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	new_lst = NULL;
	while (lst)
	{
		new_content = (*f)(lst->content);
		if (new_content == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
