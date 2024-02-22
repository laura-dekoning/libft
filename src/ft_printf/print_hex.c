/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hex.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/07 11:37:54 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/12/13 13:54:31 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	print_hex(unsigned int n, char *hex)
{
	unsigned int	len;

	len = 0;
	if (n > 15)
		len += print_hex(n / 16, hex);
	n = n % 16;
	print_c(hex[n]);
	len++;
	return (len);
}
