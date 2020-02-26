/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 09:01:09 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/24 18:28:21 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*result;
	int		i;

	result = (char*)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	i = 0;
	while (s[start] && i < (int)len)
	{
		result[i] = s[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}