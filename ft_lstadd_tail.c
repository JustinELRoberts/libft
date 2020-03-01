/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_tail.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 12:34:57 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/25 12:36:42 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_tail(t_list **alst, t_list *new_lst)
{
	t_list		*link;

	link = *alst;
	while (link->next != NULL)
		link = link->next;
	link->next = new_lst;
}
