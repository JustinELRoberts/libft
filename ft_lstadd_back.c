/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 09:45:59 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/18 09:46:01 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new_lst)
{
	t_list		*link;

	link = *alst;
	if (link == NULL)
	{
		*alst = new_lst;
		return ;
	}
	while (link->next != NULL)
		link = link->next;
	link->next = new_lst;
}
