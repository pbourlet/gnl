/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:13:24 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/09 17:28:27 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nblen(int nb)
{
	int	digit;

	digit = 0;
	if (!nb)
		return (1);
	if (nb < 0)
		digit++;
	while (nb != 0)
	{
		digit++;
		nb = nb / 10;
	}
	return (digit);
}
