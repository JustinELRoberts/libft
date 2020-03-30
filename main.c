/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <jroberts1@student.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 08:45:45 by jroberts          #+#    #+#             */
/*   Updated: 2020/03/30 08:53:57 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	t_matrix	*matrix;
	t_matrix	*inverse;
	int			ind[2] = {3, 3};

	matrix = ft_matcreate(ind[0], ind[1]);
	
	matrix->content[0][0] = -1;
	matrix->content[0][1] = 2;
	matrix->content[0][2] = 3;

	matrix->content[1][0] = 4;
	matrix->content[1][1] = 5;
	matrix->content[1][2] = 6;

	matrix->content[2][0] = 7;
	matrix->content[2][1] = -8;
	matrix->content[2][2] = 9;

	inverse = ft_matinverse(matrix);
	for (int i = 0; i < ind[0]; i++)
	{
		for (int j = 0; j < ind[1]; j++)
		{
			printf("%f ", inverse->content[i][j]);
		}
		printf("\n");
	}
}
