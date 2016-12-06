/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:36:06 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/09 21:52:46 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*frais;
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!(frais = (char *)malloc((sizeof(char) * len + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		frais[i] = f(i, s[i]);
		i++;
	}
	frais[i] = '\0';
	return (frais);
}
