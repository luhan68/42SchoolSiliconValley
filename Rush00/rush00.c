/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 21:33:20 by lhan              #+#    #+#             */
/*   Updated: 2018/06/23 21:35:05 by lhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_helper1(int i, int x)
{
	if (!((i == 0) || (i == x - 1)))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('|');
	}
}

void	rush_helper2(int i, int j, int x, int y)
{
	if (!((j == 0) || (j == y - 1)))
	{
		rush_helper1(i, x);
	}
	else if (((i == 0) || (i == x - 1)))
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('-');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			rush_helper2(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
