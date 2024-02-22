/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 20:51:05 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/12 15:13:40 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

// int main() {
//     const char* str1 = "";
//     const char* str2 = "appetizer";
//     size_t n = 4; // Number of characters to compare
// 	int	j;
//     int result = ft_strncmp(str1, str2, n);
//     int originalResult = strncmp(str1, str2, n);

// 	j = 0;
// 	while (str1[j] != '\0')
// 	{
// 		printf("Value of characters str1: %c \t %d\n", str1[j], str1[j]);
// 		j++;
// 	}
// 	j = 0;
// 	while (str2[j] != '\0')
// 	{
// 		printf("Value of characters str1: %c \t %d\n", str2[j], str2[j]);
// 		j++;
// 	}
//     printf("Comparison result using ft_strncmp: %d\n", result);
//     printf("Comparison result using strncmp: %d\n", originalResult);

//     // Compare the results with a while loop
//     size_t i = 0;
//     while (i < n) {
//         if (str1[i] != str2[i]) {
//             printf("Difference found at position %zu: '%c' != '%c'\n", i, 
//str1[i], str2[i]);
//             break; // Exit the loop when a difference is found
//         }
//         i++;
//     }

//     return 0;
// }