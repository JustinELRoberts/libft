/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <jroberts1@student.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 08:32:25 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/17 08:32:52 by jroberts         ###   ########.fr       */
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
