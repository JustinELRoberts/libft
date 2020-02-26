/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:45:00 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/23 13:32:27 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		needle_len;
	int		i;
	int		j;

	if (ft_strcmp(needle, "") == 0)
		return ((char*)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	j = 0;
	while (haystack[i] && i + needle_len <= (int)len)
	{
		while (haystack[i + j] == needle[j] && needle[j])
			j++;
		if (j == needle_len)
			return ((char*)&haystack[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
