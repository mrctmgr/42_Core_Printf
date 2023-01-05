/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtumgor <mtumgor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 00:50:08 by mtumgor           #+#    #+#             */
/*   Updated: 2023/01/05 17:18:07 by mtumgor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long num, char *chrs)
{
	int				i;

	i = 0;
	if (num > 15)
		i += ft_putpointer((num / 16), chrs);
	i += ft_putchar(chrs[num % 16]);
	return (i);
}
