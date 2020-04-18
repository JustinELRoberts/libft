/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matmult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:31:17 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/18 09:52:31 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double	mult_vecs(double **cont1, double **cont2, int pos[2], int size)
{
	int		i;
	double	res;

	i = 0;
	res = 0;
	while (i < size)
	{
		res += content1[ind[0]][i] * content2[i][ind[1]];
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
			sum = mult_vecs(m1->content, m2->content, ind, m1->size[1]);
			res->content[ind[0]][ind[1]] = sum;
		}
	}
	return (res);
}
