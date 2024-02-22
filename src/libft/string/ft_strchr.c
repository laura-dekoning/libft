/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 15:36:26 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/12 15:04:56 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*The strchr() function returns a pointer to the first occurrence of the 
character c in the string s. The strchr() and strrchr() functions return a 
pointer to the matched character or NULL if the character is not found. 
The terminating null byte is considered part of the string, so that if c is 
specified as '\0', these functions return a pointer to the terminator.

The strchr() function locates the first occurrence of c (converted to a 
char) in the string pointed to by s.  The terminating null character is 
considered to be part of the string; therefore if c is `\0', the functions 
locate the terminating `\0'.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}

// int	main()
// {
// 	const char	*str = "bonjour";
// 	int			s1 = 'b';
// 	int			s2 = 'o';
// 	int			s3 = '\0';
// 	const char	*result;

// 	result = ft_strchr(str, s1);
// 	printf("ft_strchr:\t %s\n", ft_strchr(str, s1));
// 	if (result != NULL)
// 		printf("Found '%c' at position %ld\n", s1, result - str);
// 	result = strchr(str, s1);
// 	printf("strchr:\t\t %s\n", strchr(str, s1));
// 	if (result != NULL)
// 		printf("Found '%c' at position %ld\n", s1, result - str);
// 	result = ft_strchr(str, s2);
// 	printf("ft_strchr:\t %s\n", ft_strchr(str, s2));
// 	printf("Found '%c' at position %ld\n", s2, result - str);
// 	result = strchr(str, s2);
// 	printf("strchr:\t\t %s\n", strchr(str, s2));
// 	printf("Found '%c' at position %ld\n", s2, result - str);
// 	result = ft_strchr(str, s3);
// 	printf("ft_strchr:\t %s\n", ft_strchr(str, s3));
// 	printf("Found '%c' at position %ld\n", s3, result - str);
// 	result = strchr(str, s3);
// 	printf("strchr:\t\t %s\n", strchr(str, s3));
// 	printf("Found '%c' at position %ld\n", s3, result - str);

// 	return (0);
// }