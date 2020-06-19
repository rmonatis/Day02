/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonatis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:04:35 by rmonatis          #+#    #+#             */
/*   Updated: 2020/06/19 16:30:24 by rmonatis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int ft_putchar (char a)
{
	write(1, &a, 1);
	return (0);
}

void ft_print_alphabet(void)
{
	char a;
	a = 'a';
	while(a <= 'z')
	{
		ft_putchar(a);
		a = a + 1;
	}
}

