/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 13:35:13 by lhan              #+#    #+#             */
/*   Updated: 2018/06/25 10:48:25 by lhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	if (nb == 0)
		return (1);
	result = 1;
	if (nb > 0 && nb < 13)
	{
		while (nb)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
	return (0);
}
