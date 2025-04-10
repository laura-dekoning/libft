/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_issymbol.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/10 13:04:01 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/04/10 13:04:24 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_issymbol(int c)
{
	if (c >= 33 && c <= 126)
		return (true);
	return (false);
}
