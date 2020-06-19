/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonatis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:44:47 by rmonatis          #+#    #+#             */
/*   Updated: 2020/06/19 16:37:46 by rmonatis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

int ft_putchar (char a)
{
	write(1, &a, 1);
	return (0);
}

void ft_print_numbers(void)
{
	char a;
	a = '0';
	while(a <= '9')
	{
		ft_putchar(a);
		a = a + 1;
	}
}

