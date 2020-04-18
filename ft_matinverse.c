/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matinverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 09:53:21 by jroberts          #+#    #+#             */
/*   Updated: 2020/04/18 09:54:53 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		get_cofactor(t_matrix *mat, t_matrix *t, int cur_r, int cur_c)
{
	int		row;
	int		col;
	int		i;
	int		j;

	i = 0;
	j = 0;
	row = -1;
	while (++row < mat->size[0])
	{
		col = -1;
		while (++col < mat->size[1])
		{
			if (row == cur_r || col == cur_c)
				continue ;
			t->content[i][j++] = mat->content[row][col];
			if (j == t->size[1])
			{
				j = 0;
				i++;
			}
		}
	}
}

static t_matrix	*get_adjugate(t_matrix *matrix)
{
	int			row;
	int			col;
	int			sign;
	t_matrix	*temp;
	t_matrix	*result;

	if (matrix->size[0] != matrix->size[1])
		return (NULL);
	else if (matrix->size[0] <= 0)
		return (NULL);
	temp = ft_matcreate(matrix->size[0] - 1, matrix->size[1] - 1);
	result = ft_matcreate(matrix->size[0], matrix->size[1]);
	row = -1;
	while (++row < matrix->size[0])
	{
		col = -1;
		while (++col < matrix->size[1])
		{
			sign = !((row + col) % 2) * 2 - 1;
			get_cofactor(matrix, temp, row, col);
			result->content[col][row] = sign * ft_matdet(temp);
		}
	}
	ft_matdestroy(temp);
	return (result);
}

t_matrix		*ft_matinverse(t_matrix *matrix)
{
	double		det;
	int			i;
	int			j;
	t_matrix	*adjugate;
	t_matrix	*result;

	det = ft_matdet(matrix);
	if (det == 0.0)
		return (NULL);
	adjugate = get_adjugate(matrix);
	result = ft_matcreate(matrix->size[0], matrix->size[1]);
	i = -1;
	while (++i < adjugate->size[0])
	{
		j = -1;
		while (++j < adjugate->size[1])
			result->content[i][j] = adjugate->content[i][j] / det;
	}
	free(adjugate);
	return (result);
}
