/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:30:51 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/14 22:47:00 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned	char	*ss;
	unsigned	char	cc;

	i = 0;
	ss = (unsigned char *)s;
	cc = (unsigned char)c;
	while (n--)
	{
		if (ss[i] == cc)
			return (ss + i);
		i++;
	}
	return (NULL);
}
