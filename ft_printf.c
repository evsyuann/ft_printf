/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:47:21 by aevsyuti          #+#    #+#             */
/*   Updated: 2024/02/01 12:23:44 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	what_to_print(const char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (format == 'd' || format == 'i')
		count += ft_print_nbr(va_arg(args, int));
	else if (format == 's')
		count += ft_print_str(va_arg(args, const char *));
	else if (format == 'p')
		count += ft_print_ptr(va_arg(args, uintptr_t));
	else if (format == 'u')
		count += ft_print_unsigned(va_arg(args, long long int));
	else if (format == '%')
		count += ft_print_char('%');
	else if (format == 'x' || format == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), format);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	if (!format)
		return (0);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += what_to_print(*format, args);
		}
		else
			count += ft_print_char(*format);
		format++;
	}
	va_end(args);
	return (count);
}

/* int	main(void)
{
	ft_printf("my char: %c, %c\n", 'A', 'B');
	printf("char: %c, %c\n", 'A', 'B');
	printf("\n");

	ft_printf("my number: %d, %d\n", 12345, -2147483648);
	printf("number:%d, %ld\n", 12345, -2147483648);
	printf("\n");

	ft_printf("my string: %s\n", "Anito wants a cake");
	printf("string: %s\n", "Anito wants a cake");
	printf("\n");
	
	ft_printf("my %%\n");
	printf("%%\n");
	printf("\n");

	int a = 42;
	ft_printf("my pointer to a: %p\n", &a);
	printf("pointer to a: %p\n", &a);
	printf("\n");

	unsigned int b = -34324913;
	ft_printf("my unsigned int: %u\n", b);
	printf("unsigned int: %u\n", b);
	printf("\n");

	int c = -3249;
	ft_printf("my hex: %X\n", c);
	printf("hex: %X\n", c);
	printf("\n");

	printf("res = %d\n", ft_print_nbr(2));
} */