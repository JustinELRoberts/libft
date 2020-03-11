/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matmult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:31:17 by jroberts          #+#    #+#             */
/*   Updated: 2020/03/10 20:31:59 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double	mult_vecs(double **content1, int row, double **content2, int col, int size)
{
	int		i;
	double	res;

	i = 0;
	res = 0;
	while (i < size)
	{
		res += content1[row][i] * content2[i][col];
		i++;
	}
	return (res);
}

t_matrix		*ft_matmult(t_matrix *m1, t_matrix *m2)
{
	t_matrix		*res;
	int				ind[2];
	double			sum;

	if (m1->size[1] != m2->size[0])
		return (NULL);
	res = ft_matcreate(m1->size[0], m2->size[1]);
	ind[0] = -1;
	while (++ind[0] < res->size[0])
	{
		ind[1] = -1;
		while (++ind[1] < res->size[1])
		{
			sum = mult_vecs(m1->content, ind[0], m2->content, ind[1], m1->size[1]);
			res->content[ind[0]][ind[1]] = sum;
		}
	}
	return (res);
}
