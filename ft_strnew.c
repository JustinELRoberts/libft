/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:37:38 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/25 14:52:13 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*result;
	int		i;

	result = (char*)malloc(sizeof(char) * (size + 1));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	i = 0;
	while (i <= (int)size)
		result[i++] = '\0';
	return (result);
}
