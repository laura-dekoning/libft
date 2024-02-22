/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/30 13:40:40 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/02/21 18:33:46 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

int				ft_printf(const char *str, ...);

//Printing//
unsigned int	print_c(int arg);
unsigned int	print_s(char *arg);
unsigned int	print_id(int arg);
unsigned int	print_u(unsigned int arg);
unsigned int	print_hex(unsigned int arg, char *hex);
unsigned int	print_p(unsigned long arg, char *hex);

//Utils//
unsigned int	ftp_strlen(char *str);
unsigned int	ftp_numlen(long n);

#endif
