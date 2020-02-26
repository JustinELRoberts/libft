/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:56:42 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/23 12:22:18 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	c = (char)c;
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == '\0' && c == '\0')
		return ((char*)&s[i]);
	else if (s[i] == '\0')
		return (NULL);
	else
		return ((char*)&s[i]);
}
