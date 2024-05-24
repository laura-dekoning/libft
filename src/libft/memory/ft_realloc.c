/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/24 15:45:51 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/24 17:25:23 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*	The realloc() function changes the size of the memory block pointed 
	to by ptr to size bytes. The contents will be unchanged in the range 
	from the start of the region up to the minimum of the old and new sizes.
	If the new size is larger than the old size, the added memory will not be
	initialized. 
	>> If ptr is NULL, then the call is equivalent to malloc(size),
	for all values of size; 
	>> If size is equal to zero, and ptr is not NULL,
	then the call is equivalent to free(ptr).  Unless ptr is NULL, it must
	have been returned by an earlier call to malloc(), calloc(), or realloc().
	If the area pointed to was moved, a free(ptr) is done.*/

#include "libft.h"

void	*ft_realloc(void *ptr, size_t new_size)
{
	void	*new_ptr;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
		return (free(ptr), NULL);
	new_ptr = malloc(new_size + 1);
	ft_strcpy(new_ptr, ptr);
	return (free(ptr), new_ptr);
}
