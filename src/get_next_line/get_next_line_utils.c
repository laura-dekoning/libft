/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/13 23:52:06 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/03/13 14:19:50 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_gnl_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_gnl_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != c)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (i);
}

void	*ft_gnl_memcpy(char *dst, char *src, size_t n)
{
	size_t		i;

	i = 0;
	if (dst != NULL || src != NULL)
	{
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (dst);
}

char	*ft_gnl_strdup(char *s1)
{
	char	*dup;
	size_t	slen;

	if (!s1)
		return (NULL);
	slen = ft_gnl_strlen(s1);
	dup = malloc((slen + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	else
		ft_gnl_memcpy(dup, s1, slen);
	return (dup);
}

char	*ft_gnl_strjoin(char *stash, char *buffer)
{
	size_t	len;
	size_t	str1;
	size_t	str2;
	char	*result;

	if (!stash || !buffer)
		return (NULL);
	str1 = ft_gnl_strlen(stash);
	str2 = ft_gnl_strlen(buffer);
	len = str1 + str2 + 1;
	result = malloc(len * sizeof(char));
	if (!result)
		return (free (stash), NULL);
	ft_gnl_memcpy(result, stash, str1);
	ft_gnl_memcpy(result + str1, buffer, str2);
	return (free(stash), result);
}
