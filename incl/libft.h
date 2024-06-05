/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 07:39:09 by lde-koni      #+#    #+#                 */
/*   Updated: 2024/06/05 16:41:40 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include <ctype.h>
# include <stdarg.h>
# include "ft_printf.h"
# include "get_next_line.h"
# include "colors.h"

/**
 * @brief Struct that represents a node for a linked list.
 * 
 * @param content A void pointer to the content you want in the node.
 * @param next The pointer to the next node.
*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * @brief Struct that represents the vector
 * 
 * @param data The string itself.
 * @param len The length of the string that is inside the data pointer.
 * @param capacity The total allocated memory.
*/
typedef struct s_vec
{
	char			*data;
	unsigned int	len;
	unsigned int	capacity;
}					t_vec;

/*Characters*/
bool		ft_isalpha(int c);
bool		ft_isdigit(int c);
bool		ft_isalnum(int c);
bool		ft_isascii(int c);
bool		ft_isprint(int c);
bool		ft_isnumber(char *str);

/*Strings*/
size_t		ft_strlen(const char *s);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strcmp(const char *str1, const char *str2);
int			ft_strncmp(const char *str1, const char *str2, size_t count);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
char		*ft_strcpy(char *dest, const char *src);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_atoi(const char *str);
long		ft_atol(const char *str);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_appchar(char *str, char c);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
bool		vec_init(t_vec *v, unsigned int size);
bool		vec_resize(t_vec *v);
bool		vec_push(t_vec *v, char c);
void		vec_print(t_vec *v);

/*Writing*/
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putarr_fd(char **arr, int fd);
void		ft_puterror_fd(char *str, int fd);

/*Memory*/
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
void		*ft_realloc(void *ptr, size_t new_size);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);

/*Lists*/
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void		ft_lstprint(t_list *lst);

#endif