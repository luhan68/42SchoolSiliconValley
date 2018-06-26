/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 17:27:11 by lhan              #+#    #+#             */
/*   Updated: 2018/06/21 21:40:33 by lhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int quo;
	int divider;
	char rem;
	double i;

	i = 1.0;
	quo = nb;
	while (quo >= 10)
	{
		quo = quo / 10;
		i++;
	}
	divider = nb;
	while (i > 0.0)
	{
		rem = (divider / (int)(pow(10.0, (i - 1)))) + '0';
		ft_putchar(rem);
		i = i - 1.0;
		divider = nb % (int)(pow(10.0, i));
	}

