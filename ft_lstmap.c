/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:45:55 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/17 09:45:05 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new_head;
	t_list		*current;
	t_list		*next;
	void		*new_content;

	if (lst == NULL)
		return (NULL);
	new_content = f(lst);
	new_head = ft_lstnew(new_content);
	if (new_head == NULL)
		del(new_content);
	if (new_head == NULL)
		return (NULL);
	current = new_head;
	lst = lst->next;
	while (lst != NULL)
	{
		next = ft_lstnew(f(lst));
		current->next = next;
		current = current->next;
		lst = lst->next;
	}
	current->next = NULL;
	return (new_head);
}
