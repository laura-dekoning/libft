/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:06:45 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/12 15:54:14 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*The strlcat() function appends the NUL-terminated string src to the end of 
dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating 
the result.

The strlcpy() and strlcat() functions return the total length of the string 
they tried to create. For strlcpy() that means the length of src. For strlcat() 
that means the initial length of dst plus the length of src. While this may 
seem somewhat confusing, it was done to make truncation detection simple.

Note, however, that if strlcat() traverses size characters without finding a 
NUL, the length of the string is considered to be size and the destination 
string will not be NUL-terminated (since there was no space for the NUL). 
This keeps strlcat() from running off the end of a string. In practice this 
should not happen (as it means that either size is incorrect or that dst is 
not a proper ''C'' string). The check exists to prevent potential security 
problems in incorrect code.*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	cat;
	size_t	i;

	dst_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	cat = dst_len;
	i = 0;
	while (src[i] && (i + dst_len + 1) < dstsize)
	{
		dst[i + cat] = src[i];
		i++;
	}
	if (dst_len < dstsize)
		dst[i + cat] = '\0';
	return (ft_strlen(src) + dst_len);
}

// int	main(void)
// {
// 	char	dst[20];
// 	const char	*src;
// 	int	dstsize;
// 	int	result;

// 	strcpy(dst, "hoi00000");
// 	src = "hallo";
// 	dstsize = strlen(dst);
// 	printf("dstsize: %i\n", dstsize);
// 	result = ft_strlcat(dst, src, dstsize);
// 	printf("%i\n", result);
// 	printf("Modified: %s\n", dst);

// 	return (0);
// }