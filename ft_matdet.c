/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matdet.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <jroberts1@student.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 07:41:10 by jroberts          #+#    #+#             */
/*   Updated: 2020/03/30 07:56:22 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	get_cofactor(t_matrix *matrix, t_matrix *temp, int cur_r, int cur_c)
{
	int		row;
	int		col;
	int		i;
	int		j;

	i = 0;
	j = 0;
	row = -1;
	while (++row < matrix->size[0])
	{
		col = -1;
		while (++col < matrix->size[1])
		{
			if (row == cur_r || col == cur_c)
				continue ;
			temp->content[i][j++] = matrix->content[row][col];
			if (j == temp->size[1])
			{
				j = 0;
				i++;
			}
		}
	}
}

double		ft_matdet(t_matrix *matrix)
{
	int			result;
	int			sign;
	int			i;
	t_matrix	*temp;

	result = 0;
	sign = 1;
	if (matrix->size[0] != matrix->size[1])
		return (0);
	else if (matrix->size[0] <= 0)
		return (0);
	if (matrix->size[0] == 1)
		return (matrix->content[0][0]);
	temp = ft_matcreate(matrix->size[0] - 1, matrix->size[1] - 1);
	i = -1;
	while (++i < matrix->size[1])
	{
		get_cofactor(matrix, temp, 0, i);
		result += sign * matrix->content[0][i] * ft_matdet(temp);
		sign *= -1;
	}
	ft_matdestroy(temp);
	return (result);
}
