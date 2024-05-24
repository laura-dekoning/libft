/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/24 17:20:54 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/24 17:25:59 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*	The strcpy() function copies the string pointed to by src, including the
	terminating null byte ('\0'), to the buffer pointed to by dest.  
	The strings may not overlap, and the destination string dest must be large
	enough to receive the copy.  Beware of buffer overruns!*/

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
