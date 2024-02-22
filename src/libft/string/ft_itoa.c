/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 21:39:12 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/11/03 13:56:36 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a string representing the integer 
received as an argument. Negative numbers must be handled. */

#include "libft.h"

static int	ft_numlen(int n)
{
	int		count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	int		i;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = ft_numlen(n);
	s = ft_calloc(count + 1, sizeof(char));
	if (s == NULL)
		return (NULL);
	i = count - 1;
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (s);
}
