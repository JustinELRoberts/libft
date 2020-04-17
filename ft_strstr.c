/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 09:43:26 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/11 08:22:34 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		needle_len;
	int		i;

	if (ft_strcmp(needle, "") == 0)
		return ((char*)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while (haystack[i])
	{
		if (ft_strcmp(needle, ft_substr(haystack, i, needle_len)) == 0)
			return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}
