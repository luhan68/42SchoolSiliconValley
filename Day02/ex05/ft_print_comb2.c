/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:13:15 by lhan              #+#    #+#             */
/*   Updated: 2018/06/21 21:17:19 by lhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	num(char i, char j)
{
	char k;
	char p;

	k = i;
	while (k <= '9')
	{
		p = j + 1;
		while (p <= '9')
		{
			if (!((i == '0') && (j == '0') && (k == '0') && (p == '1')))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(i);
			ft_putchar(j);
			ft_putchar(' ');
			ft_putchar(k);
			ft_putchar(p);
			p++;
		}
		k++;
	}
}

void	ft_print_comb2(void)
{
	char i;
	char j;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			num(i, j);
			j++;
		}
		i++;
	}
}
