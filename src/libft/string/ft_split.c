/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 21:40:21 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/10/17 21:40:23 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter.  The array must end
with a NULL pointer.*/

#include "libft.h"

static size_t	word_count(char *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] && str[i] == c)
		{
			while (str[i] && str[i] == c)
				i++;
		}
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static size_t	word_len(char *str, char c)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (str[i] && str[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static void	*free_mem(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static char	**fill_arr(char **arr, char *str, char c, size_t words)
{
	size_t	i;
	size_t	x;
	size_t	len;

	i = 0;
	x = 0;
	while (x < words && str[i])
	{
		while ((str[i]) == c)
			i++;
		if ((str[i]) != c)
			len = word_len(&(str[i]), c);
		arr[x] = ft_substr(str, i, len);
		if (arr[x] == NULL)
			return (free_mem(arr));
		x++;
		i = i + len;
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;
	char	*str;

	str = (char *)s;
	if (!s)
		return (NULL);
	words = word_count((char *)s, c);
	arr = ft_calloc(words + 1, sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr = fill_arr(arr, str, c, words);
	return (arr);
}

// int	main(void)
// {
// 	// char	*s = "      split       this for   me  !		";
// 	// char	c = ' ';
// 	char	**arr;
// 	int		i = 0;

// 	arr = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
// 	while (arr[i])
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// 	printf("%s\n", arr[i]);
// 	return (0);
// }