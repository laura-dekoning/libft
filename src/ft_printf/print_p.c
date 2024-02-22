/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_p.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/07 11:40:02 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/12/13 13:54:49 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	convert_hex(unsigned long n, char *hex)
{
	unsigned int	len;

	len = 0;
	if (n > 15)
		len += convert_hex(n / 16, hex);
	n = n % 16;
	print_c(hex[n]);
	len++;
	return (len);
}

unsigned int	print_p(unsigned long n, char *hex)
{
	unsigned int	len;

	len = 0;
	if (n == 0)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	len += convert_hex(n, hex);
	return (len + 2);
}
