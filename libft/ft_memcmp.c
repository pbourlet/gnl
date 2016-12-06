/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 21:07:50 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/14 17:31:20 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned	char	*c1;
	unsigned	char	*c2;

	i = 0;
	if (n == 0)
		return (0);
	c1 = (unsigned	char *)s1;
	c2 = (unsigned	char *)s2;
	while (i < n - 1)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (c1[i] - c2[i]);
}
