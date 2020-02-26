/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:43:07 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/24 14:51:31 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		s1_len;
	int		i;

	s1_len = ft_strlen(s1);
	i = 0;
	while (s2[i] && i < (int)n)
	{
		s1[s1_len] = s2[i];
		s1_len++;
		i++;
	}
	s1[s1_len] = '\0';
	return (s1);
}
