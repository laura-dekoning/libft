/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_puterror_fd.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/17 11:39:45 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/17 11:44:30 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puterror_fd(char *str, int fd)
{
	ft_putstr_fd(B_R"Error\n"DEF, fd);
	ft_putendl_fd(str, fd);
	exit(EXIT_FAILURE);
}
