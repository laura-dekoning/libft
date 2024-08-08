/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_arr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/08 16:35:49 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/08/08 16:36:16 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}
