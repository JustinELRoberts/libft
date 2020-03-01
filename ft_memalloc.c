/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:10:25 by jroberts          #+#    #+#             */
/*   Updated: 2020/03/01 13:10:13 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*result;
	int		i;

	result = malloc(size);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < (int)size)
	{
		*((char*)result + i) = 0;
		i++;
	}
	return (result);
}
