/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:21:30 by aevsyuti          #+#    #+#             */
/*   Updated: 2024/01/31 15:38:27 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	unsigned long int	num;
	int					count;

	num = n;
	count = 0;
	if (num >= 10)
	{
		count += ft_print_nbr((num / 10));
		count += ft_print_nbr((num % 10));
	}
	else
	{
		count += ft_print_char(num + '0');
	}
	return (count);
}
