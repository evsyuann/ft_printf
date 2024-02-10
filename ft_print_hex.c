/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:37:29 by aevsyuti          #+#    #+#             */
/*   Updated: 2024/01/31 15:36:38 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_of_hex(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num /= 16;
		++len;
	}
	return (len);
}

void	convert_to_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		convert_to_hex(num / 16, format);
		convert_to_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_print_char(num + '0');
		else
		{
			if (format == 'x')
				ft_print_char(num - 10 + 'a');
			else if (format == 'X')
				ft_print_char(num - 10 + 'A');
		}
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (ft_print_char('0'));
	convert_to_hex(num, format);
	return (len_of_hex(num));
}

/* int main (void)
{
	int a = 0;
	ft_print_hex(a, 'x');
	printf("res = %d\n", ft_print_hex(a, 'x'));
} */