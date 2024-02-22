/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_c.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/30 13:50:08 by lade-kon      #+#    #+#                 */
/*   Updated: 2023/12/13 13:54:24 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// This function will use write to print one single character and return the 
// value of the amount of printed characters.

#include "ft_printf.h"

unsigned int	print_c(int arg)
{
	return (write(1, &arg, 1));
}
