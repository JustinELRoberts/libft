/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 10:26:54 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/27 15:02:28 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*result;

	result = (t_list*)malloc(sizeof(t_list));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	result->content = (void*)content;
	if (content == NULL)
		result->content_size = 0;
	else
		result->content_size = content_size;
	result->next = NULL;
	return (result);
}
