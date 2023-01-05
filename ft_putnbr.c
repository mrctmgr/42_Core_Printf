/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtumgor <mtumgor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:16:43 by mtumgor           #+#    #+#             */
/*   Updated: 2023/01/02 18:15:17 by mtumgor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	*num;
	int		size;

	size = 0;
	num = ft_itoa(n);
	size += ft_putstr(num);
	free (num);
	return (size);
}
