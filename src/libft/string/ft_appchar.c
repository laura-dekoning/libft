/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_appchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/22 21:55:57 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/22 21:58:11 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_appchar(char *str, char c)
{
	char	*result;
	int		len;

	len = ft_strlen(str);
	result = ft_calloc(len + 2, sizeof(char));
	if (!result)
		ft_puterror_fd("Malloc Failed!");
	ft_memcpy(result, str, len);
	ft_memcpy(result + len, c, 1);
	return (result);
}
