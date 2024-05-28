/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_charvec.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/28 16:42:09 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/28 16:42:11 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool vec_init(t_vec *v, unsigned int size) {
	if (!v || size == 0) return false;

	v->data = malloc(sizeof(char) * size);
	if (!v->data) return false;
	v->capacity = size;
	v->len = 0;
	return true;
}

bool vec_resize(t_vec *v) {
	char *tmp;

	tmp = malloc(sizeof(char) * (v->capacity * 2));
	if (!tmp) return false;
	ft_memcpy(tmp, v->data, v->capacity);
	free(v->data);
	v->data = tmp;
	v->capacity *= 2;
	ft_printf("RESIZE!\n");
	return true;
}

bool vec_push(t_vec *v, char c) {
	if (v->len == v->capacity) {
		if (!vec_resize(v))
			return false;
	} 
	v->data[v->len] = c;
	v->len++;
	return true;
}

void vec_print(t_vec *v) {
	vec_push(v, '\0');
	ft_printf("%s\n", v->data);
	v->len = 0;
}
