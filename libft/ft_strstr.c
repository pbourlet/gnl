/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:37:45 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/15 21:47:16 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int	pos;
	int len;

	i = 0;
	pos = 0;
	len = 0;
	while (s2[len] != '\0')
		len++;
	if (len == 0)
		return ((char *)s1);
	while (s1[i])
	{
		while (s2[pos] == s1[i + pos])
		{
			if (pos == len - 1)
				return ((char *)s1 + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (0);
}
