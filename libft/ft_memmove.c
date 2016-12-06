/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:26:18 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/09 12:49:13 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (n == 0 || dest == src)
		return (dest);
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	return (dest);
}
