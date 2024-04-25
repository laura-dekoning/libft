/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstprint.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/25 18:08:49 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/25 18:11:48 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *lst)
{
	while (lst != NULL)
	{
		ft_printf("%d ", lst->content);
		lst = lst->next;
	}
	ft_printf("\n");
}
