/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:06:26 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/15 18:45:19 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*deb;
	t_list	*nxtlst;
	t_list	*frais;

	if (!lst || !f)
		return (NULL);
	frais = f(lst);
	if ((deb = ft_lstnew(frais->content, frais->content_size)))
	{
		nxtlst = deb;
		lst = lst->next;
		while (lst)
		{
			frais = f(lst);
			nxtlst->next = frais;
			if (!(frais = ft_lstnew(frais->content, frais->content_size)))
				return (NULL);
			nxtlst = nxtlst->next;
			lst = lst->next;
		}
	}
	return (deb);
}
