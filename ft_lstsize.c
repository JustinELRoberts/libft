/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 09:47:44 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/18 09:47:45 by jroberts         ###   ########.fr       */
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
