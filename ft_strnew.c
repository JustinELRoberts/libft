/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:37:38 by jroberts          #+#    #+#             */
/*   Updated: 2020/03/01 13:15:18 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*result;
	int		i;

	result = (char*)ft_memalloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i <= (int)size)
		result[i++] = '\0';
	return (result);
}
