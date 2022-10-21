/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:59:33 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/21 17:21:52 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	while (*s1 && ft_strchr(set, *s1))
		s1 ++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i --;
	return (ft_substr(s1, 0, i + 1));
}
