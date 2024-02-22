/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 14:28:22 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/11 14:28:40 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sptr;

	sptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (sptr[i] == (unsigned char)c)
			return (&sptr[i]);
		else
			i++;
	}
	return (NULL);
}
