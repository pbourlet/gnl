/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:24:26 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/15 18:03:38 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	if (!s || !(tab = malloc(sizeof(char *) * ft_strlen(s) / 2 + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		l = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i + l] != c && s[i + l])
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
