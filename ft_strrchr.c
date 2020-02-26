/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:02:05 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/23 14:36:22 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = 0;
	c = (char)c;
	result = NULL;
	while (s[i])
	{
		if (s[i] == c)
			result = (char*)&s[i];
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return ((char*)&s[i]);
	else
		return (result);
}
