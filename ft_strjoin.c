/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 09:24:33 by jroberts          #+#    #+#             */
/*   Updated: 2020/03/01 13:14:39 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		tot_len;
	char	*result;
	int		i;
	int		j;

	tot_len = ft_strlen(s1) + ft_strlen(s2);
	result = (char*)ft_memalloc(sizeof(char) * (tot_len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		result[j++] = s1[i++];
	i = 0;
	while (s2[i])
	{
		result[j++] = s2[i];
		i++;
	}
	result[j] = '\0';
	return (result);
}
