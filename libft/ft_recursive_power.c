/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:42:39 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/16 14:44:32 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_recursive_power(int nb, int power)
{
	if (-2147483648 < nb && nb < 2147483647)
	{
		if (power >= 1)
		{
			nb = nb * ft_recursive_power(nb, power - 1);
			return (nb);
		}
		if (power == 0)
		{
			nb = 1;
			return (nb);
		}
	}
	return (0);
}
