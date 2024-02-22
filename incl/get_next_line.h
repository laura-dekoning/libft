/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/13 23:48:49 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/02/21 18:29:52 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*read_line(char *stash, int fd);
char	*static_line(char *stash);
char	*new_line(char *stash);
char	*ft_gnl_strjoin(char *stash, char *buffer);
char	*ft_gnl_strdup(char *s1);
void	*ft_gnl_memcpy(char *dst, char *src, size_t n);
int		ft_gnl_strchr(char *str, int c);
size_t	ft_gnl_strlen(char *s);

#endif
