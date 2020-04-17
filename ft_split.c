/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <jroberts1@student.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 08:24:34 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/17 15:19:31 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		initialize_delim_locs(int *delim_locs, int len)
{
	int		i;

	i = 0;
	delim_locs[0] = -1;
	while (i < len)
	{
		delim_locs[i] = -1;
		i++;
	}
}

static void		get_delim_locs(const char *s, char c, int *delim_locs)
{
	int			on_delim;
	int			i;
	int			j;

	on_delim = 1;
	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (on_delim)
			{
				delim_locs[j] = i;
				j++;
			}
			on_delim = 0;
		}
		else
			on_delim = 1;
		i++;
	}
}

static int		get_num_delims(int *delim_locs)
{
	int		i;

	i = 0;
	while (delim_locs[i] >= 0)
		i++;
	return (i);
}

static void		make_delim_locs(const char *s, char c, int *delim_locs)
{
	initialize_delim_locs(delim_locs, ft_strlen(s));
	get_delim_locs(s, c, delim_locs);
}

char			**ft_split(const char *s, char c)
{
	char	**result;
	int		delim_locs[ft_strlen(s) + 1];
	int		*ind;

	make_delim_locs(s, c, delim_locs);
	result = (char **)ft_memalloc(sizeof(char*) * (get_num_delims(delim_locs) + 1));
	ind = (int[3]){-1, 0, 0};
	while (++ind[0] < get_num_delims(delim_locs) + 1)
		result[ind[0]] = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	result[get_num_delims(delim_locs)] = NULL;
	ind = (int[3]){0, delim_locs[0], 0};
	if (delim_locs[0] < 0)
		return (result);
	while (delim_locs[ind[0]] >= 0 && s[ind[1]])
	{
		if (s[ind[1]] == c)
		{
			ind[0]++;
			ind[1] = delim_locs[ind[0]];
			ind[2] = 0;
			continue;
		}
		result[ind[0]][ind[2]++] = s[ind[1]++];
	}
	return (s != NULL) ? result : NULL;
}
