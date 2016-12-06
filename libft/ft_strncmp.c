/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:41:02 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/14 17:44:08 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned	char	*ss1;
	unsigned	char	*ss2;

	i = 0;
	if (n == 0)
		return (0);
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (ss1[i] != '\0' && ss2[i] != '\0' && i < n - 1)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (ss1[i] - ss2[i]);
}
