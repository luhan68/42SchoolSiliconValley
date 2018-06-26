/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 15:41:21 by lhan              #+#    #+#             */
/*   Updated: 2018/06/22 16:31:22 by lhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int *temp;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size - 1)
		{
			if (tab[i] < tab[j])
			{
				temp = &tab[i];
				&tab[i] = &tab[j];
				&tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
