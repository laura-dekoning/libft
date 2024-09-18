/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_wordlen.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/18 11:29:58 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/09/18 11:30:28 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordlen(char *str, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i] && str[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}