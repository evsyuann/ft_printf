/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:30:28 by aevsyuti          #+#    #+#             */
/*   Updated: 2024/02/01 12:50:45 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_of_hex(uintptr_t num)
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

void	conver_to_hex(uintptr_t num)
{
	if (num >= 16)
	{
		converting_to_hex(num / 16);
		converting_to_hex(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_print_char(num + '0');
		else
			ft_print_char(num - 10 + 'a');
	}
}

int	ft_print_ptr(uintptr_t ptr)
{
	int	len;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	len = ft_print_str("0x");
	converting_to_hex(ptr);
	len += len_of_new_num(ptr);
	return (len);
}

/* int main(void)
{
	ft_printf("The NULL macro represents the %p address\n", ((void*)0));
	ft_printf(" %p %p \n", 0, 0);
	printf(" printf %p %p \n", NULL, NULL);
	write(1, "\n", 1);
	char *str = NULL;
	ft_printf(" %p \n",  str);
	printf(" printf %p \n",  str);

	return (0);
} */
