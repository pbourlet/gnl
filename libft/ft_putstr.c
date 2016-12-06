/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:36:39 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/09 16:33:47 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	char	*ss;
	int		i;

	if (!s)
		return ;
	i = 0;
	ss = (char *)s;
	while (ss[i] != '\0')
	{
		ft_putchar(ss[i]);
		i++;
	}
}
