/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 09:47:55 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/19 13:39:33 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		clear_result(char **result, int num_allocated)
{
	int		i;

	i = -1;
	while (++i < num_allocated)
		free(result[i]);
}

static int		get_result(char **result, const char *str, char c)
{
	int		res_ind;
	int		len;
	int		start;
	int		end;

	res_ind = 0;
	len = ft_strlen(str);
	start = -1;
	while (++start < len)
	{
		if (str[start] != c)
		{
			end = start + 1;
			while (str[end] && str[end] != c)
				end++;
			result[res_ind++] = ft_substr(str, start, end - start);
			if (result[res_ind - 1] == NULL)
				clear_result(result, res_ind);
			if (result[res_ind - 1] == NULL)
				return (-1);
			start = end - 1;
		}
	}
	result[res_ind] = NULL;
	return (1);
}

char			**ft_split(const char *str, char c)
{
	char	**result;

	if (str == NULL)
		return (NULL);
	result = (char**)ft_memalloc(sizeof(char*) * (ft_strlen(str) + 1));
	if (result == NULL)
		return (NULL);
	if (get_result(result, str, c) == -1)
	{
		free(result);
		return (NULL);
	}
	return (result);
}
