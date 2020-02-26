/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:18:23 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/25 15:27:41 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*previous_link;
	t_list		*link;

	previous_link = *alst;
	if (previous_link == NULL)
		return ;
	link = previous_link->next;
	while (link != NULL)
	{
		ft_lstdelone(&previous_link, del);
		previous_link = link;
		link = link->next;
	}
	ft_lstdelone(&previous_link, del);
	*alst = NULL;
}
