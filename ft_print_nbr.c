/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:37:08 by aevsyuti          #+#    #+#             */
/*   Updated: 2024/01/31 15:36:56 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	int			count;
	long int	num;

	num = n;
	count = 0;
	if (num < 0)
	{
		count += ft_print_char('-');
		num *= -1;
	}
	if (num >= 10)
	{
		count += ft_print_nbr((num / 10));
		count += ft_print_nbr((num % 10));
	}
	else
		count += ft_print_char(num + '0');
	return (count);
}

/* int main(void)
{
	int r = 1243464576;
	ft_print_nbr_fd(r, 1);
	return (0);
}
 */
