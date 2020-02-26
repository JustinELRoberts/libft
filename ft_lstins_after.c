/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstins_after.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 10:48:17 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/26 11:05:17 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstins_after(t_list *oldlink, t_list *newlink)
{
	t_list		*oldnext;

	if (oldlink == NULL)
		return (0);
	oldnext = oldlink->next;
	oldlink->next = newlink;
	if (oldnext != NULL)
		newlink->next = oldnext;
	return (1);
}
