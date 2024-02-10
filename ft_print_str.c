/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:31:11 by aevsyuti          #+#    #+#             */
/*   Updated: 2024/02/01 12:22:58 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(const char *str)
{
	size_t		i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

int	ft_print_str(const char *s)
{
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}

/* int main(void)
{
	char str[] = "";
	ft_print_str(str);
	printf("res = %d\n", ft_print_str(NULL));
	printf(" NULL %s NULL \n", (char *)NULL);
	ft_printf(" NULL %s NULL \n", NULL);
} */

//(int)&i
