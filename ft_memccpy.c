/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 10:45:12 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/25 16:52:23 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	int		i;

	if (n == 0)
		return (NULL);
	c = (unsigned char)c;
	d = (unsigned char*)d;
	s = (unsigned char*)s;
	i = 0;
	while (i < (int)n)
	{
		*(unsigned char*)(d + i) = *(unsigned char*)(s + i);
		if (*(unsigned char*)(s + i) == c)
			return (&d[i + 1]);
		i++;
	}
	return (NULL);
}
