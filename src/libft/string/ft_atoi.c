/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 21:28:01 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/10/17 21:28:05 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//The atoi() function converts the initial portion of the string pointed 
//to by str to int representation.

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	neg_pos;
	int	res;
	int	i;

	neg_pos = 1;
	res = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		neg_pos = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * neg_pos);
}
