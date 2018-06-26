/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 15:59:01 by lhan              #+#    #+#             */
/*   Updated: 2018/06/25 10:49:01 by lhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb >= 0 || nb < 13)
	{
		if ((nb == 1) || (nb == 0))
		{
			return (1);
		}
		else if (nb)
		{
			return (nb * ft_recursive_factorial(nb - 1));
		}
	}
	return (0);
}