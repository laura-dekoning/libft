/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_id.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/07 11:39:31 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/02/21 18:33:26 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	print_id(int n)
{
	unsigned int	len;
	long			i;

	i = n;
	len = ftp_numlen(i);
	if (len < 1)
		return (-1);
	if (i < 0)
	{
		print_c('-');
		if (i < -9)
			print_id(-(i / 10));
		print_c(-(i % 10) + '0');
	}
	else if (i <= 9)
		print_c(i + '0');
	else
	{
		print_id(i / 10);
		print_id(i % 10);
	}
	return (len);
}
