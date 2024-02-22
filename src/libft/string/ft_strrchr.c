/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 16:27:16 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/12 15:10:27 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*The strrchr() function is identical to strchr(), except it locates 
the last occurrence of c.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	str_len;

	str_len = ft_strlen(s) + 1;
	while (str_len--)
		if (s[str_len] == (unsigned char)c)
			return ((char *)(s + str_len));
	return (NULL);
}

// int	main()
// {
// 	const char	*str = "bonjour";
// 	int			s1 = 'b';
// 	int			s2 = 'o';
// 	int			s3 = '\0';
// 	const char	*result;

// 	result = ft_strrchr(str, s1);
// 	printf("ft_strrchr:\t %s\n", ft_strrchr(str, s1));
// 	if (result != NULL)
// 		printf("Found '%c' at position %ld\n", s1, result - str);
// 	result = strrchr(str, s1);
// 	printf("strrchr:\t\t %s\n", strrchr(str, s1));
// 	if (result != NULL)
// 		printf("Found '%c' at position %ld\n", s1, result - str);
// 	result = ft_strrchr(str, s2);
// 	printf("ft_strrchr:\t %s\n", ft_strrchr(str, s2));
// 	printf("Found '%c' at position %ld\n", s2, result - str);
// 	result = strrchr(str, s2);
// 	printf("strrchr:\t\t %s\n", strrchr(str, s2));
// 	printf("Found '%c' at position %ld\n", s2, result - str);
// 	result = ft_strrchr(str, s3);
// 	printf("ft_strrchr:\t %s\n", ft_strrchr(str, s3));
// 	printf("Found '%c' at position %ld\n", s3, result - str);
// 	result = strrchr(str, s3);
// 	printf("strrchr:\t\t %s\n", strrchr(str, s3));
// 	printf("Found '%c' at position %ld\n", s3, result - str);

// 	return (0);
// }