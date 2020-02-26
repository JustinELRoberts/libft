/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:53:26 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/25 15:11:57 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int			ft_atoi(char *str)
{
	int				i;
	int				negative;
	long long int	result;

	i = 0;
	while (str[i] && ft_iswhitespace(str[i]))
		i++;
	negative = 1;
	if (str[i] == '-')
	{
		i++;
		negative = -1;
	}
	else if (str[i] == '+')
		i++;
	result = 0;
	while (ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (negative * (int)result);
}
