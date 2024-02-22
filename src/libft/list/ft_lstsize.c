/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 14:00:33 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/10/25 14:10:35 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*current_node;

	i = 0;
	current_node = lst;
	if (current_node == NULL)
		return (0);
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
		i++;
	}
	if (current_node->next == NULL)
		i++;
	return (i);
}
