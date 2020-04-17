/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <jroberts1@student.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 08:03:48 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/17 10:18:26 by jroberts         ###   ########.fr       */
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
