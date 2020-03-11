/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matdestroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:30:59 by jroberts          #+#    #+#             */
/*   Updated: 2020/03/10 14:38:40 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_matdestroy(t_matrix *matrix)
{
	int		i;

	i = -1;
	while (++i < matrix->size[0])
		free(matrix->content[i]);
	free(matrix->content);
	free(matrix);
}
