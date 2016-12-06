/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:17:08 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/14 12:02:30 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nxtlst;

	nxtlst = *alst;
	while (nxtlst)
	{
		nxtlst = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
		(*alst) = nxtlst;
	}
	free(*alst);
	*alst = NULL;
}
