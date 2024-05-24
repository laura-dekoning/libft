/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_appchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/22 21:55:57 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/24 13:23:15 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_appchar(char *str, char c)
{
	char	*result;
	int		len;

	if (!str)
	{
		ft_strdup("");
		len = 0;
	}
	else
		len = ft_strlen(str);
	result = ft_calloc(len + 2, sizeof(char));
	if (!result)
		ft_puterror_fd("Memory allocation failed!", STDERR_FILENO);
	ft_memcpy(result, str, len);
	result[len] = c;
	return (result);
}