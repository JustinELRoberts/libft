/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 11:06:18 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/27 17:44:44 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstfind(t_list *lst, void *content)
{
	while (lst != NULL)
	{
		if (ft_strequ(content, lst->content))
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
