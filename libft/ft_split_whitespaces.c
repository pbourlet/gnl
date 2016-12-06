/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:00:14 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/16 15:18:29 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split_whitespaces(char *s)
{
	char	**tab;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	if (!s || !(tab = malloc(sizeof(char *) * (ft_strlen(s) / 2 + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		l = 0;
		while (s[i] == ' ' && s[i])
			i++;
		while (s[i + l] != ' ' && s[i + l])
			l++;
		if (s[i])
		{
			tab[j++] = ft_strsub(s, i, l);
			i = i + l;
		}
	}
	tab[j] = NULL;
	return (tab);
}
