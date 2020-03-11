/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matcreate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:30:36 by jroberts          #+#    #+#             */
/*   Updated: 2020/03/10 14:39:12 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_matrix	*ft_matcreate(int n_rows, int n_cols)
{
	t_matrix	*res;
	int			i;

	res = ft_memalloc(sizeof(t_matrix));
	res->size[0] = n_rows;
	res->size[1] = n_cols;
	res->content = (double**)ft_memalloc(sizeof(double*) * n_rows);
	i = -1;
	while (++i < n_rows)
		res->content[i] = (double*)ft_memalloc(sizeof(double) * n_cols);
	return (res);
}
