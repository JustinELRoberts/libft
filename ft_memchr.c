/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 11:02:00 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/24 15:22:15 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;

	c = (unsigned char)c;
	i = 0;
	while (i < (int)n)
	{
		if (*(unsigned char*)(s + i) == c)
			return ((void*)&s[i]);
		i++;
	}
	return (NULL);
}
