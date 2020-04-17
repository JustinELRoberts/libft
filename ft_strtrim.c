/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 09:33:28 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/17 10:20:08 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(const char *s)
{
	int		i;
	int		new_indices[2];

	if (s == NULL)
		return (NULL);
	i = 0;
	while (is_whitespace(s[i]) && s[i])
		i++;
	new_indices[0] = i;
	i = ft_strlen(s) - 1;
	while (is_whitespace(s[i]) && s[i])
		i--;
	new_indices[1] = i;
	if (new_indices[1] == -1)
		return ("");
	return (ft_substr(s, new_indices[0], new_indices[1] - new_indices[0] + 1));
}
