/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putarr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/25 13:05:06 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/25 13:09:36 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putarr_fd(char **arr, int fd)
{
	int	i;

	if (!arr)
		return ;
	i = 0;
	while (arr[i])
	{
		ft_putstr_fd(arr[i], fd);
		i++;
	}
}
