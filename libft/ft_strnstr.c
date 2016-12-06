/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:37:18 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/14 23:10:57 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t				l;
	unsigned	char	*ss;

	if (ft_strcmp(to_find, "") == 0)
		return ((char *)str);
	ss = (unsigned char *)str;
	l = ft_strlen(to_find);
	while (*ss != '\0' && len-- >= l)
	{
		if (*ss == *to_find && ft_memcmp(ss, to_find, l) == 0)
			return ((char *)ss);
		ss++;
	}
	return (NULL);
}
