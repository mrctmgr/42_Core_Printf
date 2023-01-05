/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtumgor <mtumgor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:17:50 by mtumgor           #+#    #+#             */
/*   Updated: 2023/01/02 18:18:40 by mtumgor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_str_dec(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	ft_write(int size, int offset, int n, char *res)
{
	while (size > offset)
	{
		res[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	int		offset;
	int		size;
	char	*array;

	offset = 0;
	size = ft_str_dec(n);
	array = (char *)malloc(sizeof(char) * size + 1);
	if (!array)
		return (0);
	if (n == -2147483648)
	{
		array[0] = '-';
		array[1] = '2';
		n = 147483648;
		offset = 2;
	}
	if (n < 0)
	{
		array[0] = '-';
		offset = 1;
		n *= -1;
	}
	ft_write(size, offset, n, array);
	array[size] = '\0';
	return (array);
}
