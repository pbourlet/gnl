/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:59:58 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/09 17:00:14 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		l;
	int		i;
	char	tmp;

	i = -1;
	l = 0;
	while (str[l] != '\0')
		l++;
	while (++i < --l)
	{
		tmp = str[i];
		str[i] = str[l];
		str[l] = tmp;
	}
	return (str);
}
