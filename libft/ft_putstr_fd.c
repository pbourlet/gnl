/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 21:22:08 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/09 22:02:25 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *str, int fd)
{
	int i;

	i = 0;
	if (!str || !fd)
		return ;
	while (str[i] != '\0')
	{
		ft_putchar_fd((int)str[i], fd);
		i++;
	}
}
