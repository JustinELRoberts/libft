/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 12:12:32 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/22 13:21:04 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;

	len = (int)len;
	i = 0;
	if (dst < src)
	{
		while (i < (int)len)
		{
			((char*)dst)[i] = ((char*)src)[i];
			i++;
		}
	}
	else if (src < dst)
	{
		while (i < (int)len)
		{
			((char*)dst)[len - i - 1] = ((char*)src)[len - i - 1];
			i++;
		}
	}
	return (dst);
}
