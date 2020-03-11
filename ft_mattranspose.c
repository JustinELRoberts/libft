/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mattranspose.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 15:12:04 by jroberts          #+#    #+#             */
/*   Updated: 2020/03/10 20:32:36 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_matrix		*ft_mattranspose(t_matrix *mat)
{
	t_matrix	*res;
	int			row;
	int			col;

	res = ft_matcreate(mat->size[1], mat->size[0]);
	row = -1;
	while (++row < res->size[0])
	{
		col = -1;
		while (++col < res->size[1])
			res->content[row][col] = mat->content[col][row];
	}
	return (res);
}
