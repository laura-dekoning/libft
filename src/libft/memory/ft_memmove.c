/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 15:06:54 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/10/04 15:07:29 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//The memmove() function copies len bytes from string src to string dst. The 
//two strings may overlap; the copy is always done in a non-destructive manner.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	if (!dst && !src)
		return (0);
	i = 0;
	if (dst > src)
	{
		while (len--)
			((char *)dst)[len] = ((const char *)src)[len];
		return (dst);
	}
	while (i < len)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}
