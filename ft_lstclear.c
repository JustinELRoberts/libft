/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <jroberts1@student.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 08:34:09 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/17 09:41:51 by jroberts         ###   ########.fr       */
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
