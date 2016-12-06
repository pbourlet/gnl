/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:38:30 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/14 17:19:42 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned	char	*sstr;
	int					i;
	int					neg;
	int					num;

	i = 0;
	neg = 0;
	num = 0;
	sstr = (unsigned char *)str;
	while (sstr[i] <= 32)
		i++;
	if (sstr[i] == '-')
		neg = 1;
	if ((sstr[i] == '-') || (sstr[i] == '+'))
		i++;
	while (sstr[i] >= '0' && sstr[i] <= '9')
	{
		num *= 10;
		num += (sstr[i] - 48);
		i++;
	}
	if (neg == 1)
		return (-num);
	else
		return (num);
}
