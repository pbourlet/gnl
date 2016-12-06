/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:06:21 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/09 21:52:29 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*frais;
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!(frais = (char *)malloc(sizeof(*frais) * (len + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		frais[i] = f(s[i]);
		i++;
	}
	frais[i] = '\0';
	return (frais);
}
