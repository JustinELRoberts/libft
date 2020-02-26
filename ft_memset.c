/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:19:32 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/23 11:09:35 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		b_len;
	int		i;

	b_len = ft_strlen(b);
	c = (unsigned char)c;
	i = 0;
	while (i < (int)len)
		((char*)b)[i++] = c;
	return (b);
}
