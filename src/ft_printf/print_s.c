/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_s.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 13:47:52 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/02/21 19:02:25 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// This function will use write to print an entire string and it will return
// the string length. 

#include "ft_printf.h"

unsigned int	print_s(char *arg)
{
	unsigned int	i;

	i = 0;
	if (!arg)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (arg[i] != '\0')
	{
		print_c(arg[i]);
		i++;
	}
	return (ftp_strlen(arg));
}
