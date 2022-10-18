/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:37:48 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/14 17:05:23 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	index;

	if (!dest || !src)
		return (NULL);
	index = 0;
	while (index < n)
	{
		((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
		if (((unsigned char *)dest)[index] == (unsigned char)c)
			return (dest + index + 1);
		index ++;
	}
	return (NULL);
}
