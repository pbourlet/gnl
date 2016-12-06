/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:29:53 by pbourlet          #+#    #+#             */
/*   Updated: 2016/12/06 16:53:02 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tronc;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(tronc = (char *)malloc(sizeof(*tronc) * (len + 1))))
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		tronc[i] = s[start + i];
		i++;
	}
	tronc[i] = '\0';
	return (tronc);
}
