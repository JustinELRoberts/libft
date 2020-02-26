/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:27:10 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/24 14:51:41 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t dstsize)
{
	int		result;
	int		s1_len;
	int		i;

	s1_len = ft_strlen(s1);
	if ((int)dstsize >= s1_len + 1)
		result = s1_len + ft_strlen(s2);
	else
		result = ft_strlen(s2) + (int)dstsize;
	i = 0;
	while (s2[i] && i < (int)dstsize - s1_len - 1)
	{
		s1[s1_len + i] = s2[i];
		i++;
	}
	s1[s1_len + i] = '\0';
	return (result);
}
