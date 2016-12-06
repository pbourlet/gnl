/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:11:37 by pbourlet          #+#    #+#             */
/*   Updated: 2016/12/06 14:54:02 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*frais;

	if (!(frais = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		frais->content = NULL;
		frais->content_size = 0;
	}
	else
	{
		if (!(frais->content = malloc(content_size)))
		{
			free(frais);
			return (NULL);
		}
		ft_memcpy((frais->content), content, content_size);
		frais->content_size = content_size;
	}
	frais->next = NULL;
	return (frais);
}
