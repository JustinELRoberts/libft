/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 09:46:43 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/18 09:46:44 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		dst_len;
	int		i;

	if (dst == NULL || src == NULL)
		return (-1);
	if (dstsize == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	i = -1;
	while (++i < (int)dstsize - 1 && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}
