/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 09:33:28 by jroberts          #+#    #+#             */
/*   Updated: 2020/05/11 12:42:49 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(char c, const char *set)
{
	int		i;

	i = -1;
	while (set[++i])
	{
		if (c == set[i])
			return (1);
	}
	return (0);
}

char		*ft_strtrim(const char *str, const char *set)
{
	int		i;
	int		new_indices[2];

	if (str == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (char_in_set(str[i], set) && str[i])
		i++;
	new_indices[0] = i;
	i = ft_strlen(str) - 1;
	while (char_in_set(str[i], set) && str[i])
		i--;
	new_indices[1] = i;
	if (new_indices[1] == -1)
		return ("");
	return (ft_substr(str, new_indices[0], new_indices[1] - new_indices[0] + 1));
}
