/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <jroberts1@student.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 08:50:23 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/17 08:52:04 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		result;

	if (lst == NULL)
		return (0);
	result = 1;
	while (lst->next != NULL)
	{
		result += 1;
		lst = lst->next;
	}
	return (result);
}
