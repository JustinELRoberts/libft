/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:45:55 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/25 17:16:06 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new_head;
	t_list		*current;
	t_list		*next;

	if (lst == NULL)
		return (NULL);
	new_head = f(lst);
	current = new_head;
	lst = lst->next;
	while (lst != NULL)
	{
		next = f(lst);
		current->next = next;
		current = current->next;
		lst = lst->next;
	}
	current->next = NULL;
	return (new_head);
}
