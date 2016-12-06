/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:35:35 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/09 12:43:11 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (!size)
		return (ft_strlen(src));
	while (dst[l] != '\0' && l < size)
		l++;
	while (i + l < size - 1 && src[i] != '\0')
	{
		if (l + i < size)
			dst[l + i] = src[i];
		i++;
	}
	if (l + i < size)
		dst[l + i] = '\0';
	return (ft_strlen(src) + l);
}
