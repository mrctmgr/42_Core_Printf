/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtumgor <mtumgor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:12:14 by mtumgor           #+#    #+#             */
/*   Updated: 2023/01/05 18:31:59 by mtumgor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putpointer(unsigned long num, char *chrs);
int		ft_putstr(char *str);
int		ft_putuint(unsigned int num);
int		ft_printf(const char *str, ...);
char	*ft_itoa(int num);

#endif