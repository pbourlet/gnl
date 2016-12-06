/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:43:25 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/15 16:03:57 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;
	int		len;

	i = 0;
	nb = n;
	if (n < 0)
		nb = -nb;
	len = ft_nblen(nb);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1 + (n < 0)))))
		return (NULL);
	if (nb == 0)
		return (ft_strcpy(str, "0"));
	while (nb != 0)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}
