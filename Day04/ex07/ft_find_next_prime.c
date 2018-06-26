/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 18:22:52 by lhan              #+#    #+#             */
/*   Updated: 2018/06/23 18:41:40 by lhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		primetest(int nb, int i)
{
	if (nb == 1 || nb == 0)
		return (0);
	if (i == 1)
		return (1);
	else
	{
		if (nb % i == 0)
			return (0);
		else
			return (primetest(nb, i - 1));
	}
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	if (nb == 1 || nb == 0)
		return (2);
	while (!primetest(nb + i, (nb + i) / 2))
	{
		i++;
	}
	return (nb + i);
}
