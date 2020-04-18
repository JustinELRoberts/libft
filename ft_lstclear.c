/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 09:47:28 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/18 09:47:29 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **alst, void (*del)(void *))
{
	t_list		*previous_link;
	t_list		*link;

	previous_link = *alst;
	if (previous_link == NULL)
		return ;
	link = previous_link->next;
	while (link != NULL)
	{
		del(previous_link);
		previous_link = link;
		link = link->next;
	}
	del(previous_link);
	*alst = NULL;
}
