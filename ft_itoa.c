/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 13:47:42 by jroberts          #+#    #+#             */
/*   Updated: 2020/02/26 11:37:24 by jroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}

static int	num_digits(int num)
{
	int result;

	result = 1;
	while (ft_abs(num) > 9)
	{
		result++;
		num /= 10;
	}
	return (result);
}

static int	is_null(char *result)
{
	if (result == NULL)
	{
		free(result);
		return (1);
	}
	else
		return (0);
}

char		*ft_itoa(int num)
{
	int		numlen;
	int		negative;
	char	*result;

	numlen = num_digits(num);
	negative = 0;
	if (num < 0)
		negative = 1;
	result = (char*)malloc(numlen + negative + 1);
	if (is_null(result))
		return (NULL);
	result[negative + numlen--] = '\0';
	if (num == -2147483648)
	{
		ft_strcpy(result, "-2147483648");
		return (result);
	}
	while (numlen >= 0)
	{
		result[negative + numlen--] = ft_abs(num % 10) + '0';
		num /= 10;
	}
	if (negative)
		result[0] = '-';
	return (result);
}
