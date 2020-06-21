/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonatis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:07:41 by rmonatis          #+#    #+#             */
/*   Updated: 2020/06/21 14:42:44 by rmonatis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar (char z)
{
	write(1, &z, 1);
	return (0);
}

void ft_print_reverse_alphabet(void)
{
	char z;
	z = 'z';
	while(z >= 'a')
	{
		ft_putchar(z);
		z = z - 1;
	}
}

