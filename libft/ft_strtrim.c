/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 20:32:10 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/10 15:42:42 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*cpy;
	int		i;
	int		len;

	i = -1;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	while (s[++i] == ' ' || s[i] == '\n' || s[i] == '\t')
		len--;
	if (len <= 0 || !s)
		len = 0;
	if (!(cpy = (char *)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	cpy = ft_strsub(s, i, len);
	return (cpy);
}
