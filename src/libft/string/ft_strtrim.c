/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 21:38:42 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/10/17 21:38:53 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		i2;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	i2 = ft_strlen(s1);
	while (i2 > 0 && ft_strrchr(set, s1[i2]))
		i2--;
	str = ft_substr(s1, i, (i2 - i + 1));
	return (str);
}
