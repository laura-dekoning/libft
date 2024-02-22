/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 13:16:10 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/10/12 14:07:49 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*The strlcpy() function copies strings respectively.  
They are designed to be safer, more consistent, and less error 
prone replacements for strncpy(3) and strncat(3). Unlike those functions, 
strlcpy() and strlcat() take the full size of the buffer (not just the length) 
and guarantee to NUL-terminate the result (as long as size is larger than 0 
or, in the case of strlcat(), as long as there is at least one byte free 
in dst).  Note that a byte for the NUL should be included in size.  Also note 
that strlcpy() and strlcat() only operate on true “C” strings.  This means that
for strlcpy() src must be NUL-terminated and for strlcat() both src and dst 
must be NUL-terminated. The strlcpy() function copies up to size - 1 
characters from the NUL-terminated string src to dst, NUL-terminating the 
result. The strlcpy() and strlcat() functions return the total length of 
the string they tried to create. For strlcpy() that means the length of src. */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
