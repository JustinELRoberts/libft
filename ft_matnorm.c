/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matnorm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 09:52:57 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/18 09:52:59 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

double		ft_matnorm(t_matrix *vec)
{
	t_matrix	*transpose;
	t_matrix	*res_mat;
	double		result;

	if (vec->size[0] != 1 && vec->size[1] != 1)
		return (-1.0);
	transpose = ft_mattranspose(vec);
	if (vec->size[0] == 1)
		res_mat = ft_matmult(vec, transpose);
	if (vec->size[1] == 1)
		res_mat = ft_matmult(transpose, vec);
	result = res_mat->content[0][0];
	ft_matdestroy(transpose);
	ft_matdestroy(res_mat);
	return (sqrt(result));
}
