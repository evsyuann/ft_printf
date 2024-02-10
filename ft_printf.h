/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:39:26 by aevsyuti          #+#    #+#             */
/*   Updated: 2024/02/01 12:08:51 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

# include <unistd.h>
# include <inttypes.h>

int		ft_printf(const char *format, ...);
int		ft_print_char(int c);
int		ft_print_nbr(int n);
int		ft_print_str(const char *s);
int		ft_print_unsigned(unsigned int n);
int		ft_print_ptr(uintptr_t ptr);
int		ft_print_hex(unsigned int num, const char format);

#endif
