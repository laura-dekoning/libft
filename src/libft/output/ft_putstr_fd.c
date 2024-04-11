/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 17:01:57 by lde-koni      #+#    #+#                 */
/*   Updated: 2024/04/11 11:12:49 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the string ’s’ to the given file descriptor. s: The string to output.
fd: The file desciptor on which to write. Using putchar_fd. */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
	ft_putchar_fd('\n', fd);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;

// 	str1 = "Hello\n";
// 	str2 = "";
// 	str3 = "Hoi\n";
// 	ft_putstr_fd(str1, 1);
// 	ft_putstr_fd(str2, 1);
// 	ft_putstr_fd(str3, 1);

// 	return (0);
// }