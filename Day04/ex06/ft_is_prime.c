/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 17:33:26 by lhan              #+#    #+#             */
/*   Updated: 2018/06/23 18:22:18 by lhan             ###   ########.fr       */
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

int		ft_is_prime(int nb)
{
	if (nb % 2 == 0)
	{
		if (nb == 2)
			return (1);
		else
			return (0);
	}
	return (primetest(nb, nb / 2));
}
