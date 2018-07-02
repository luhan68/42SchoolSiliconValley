/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 18:53:20 by lhan              #+#    #+#             */
/*   Updated: 2018/06/28 19:44:50 by lhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*str;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	str = (int*)malloc(sizeof(*str) * (max - min));
	i = 0;
	while (i + min < max)
	{
		str[i] = min + i;
		i++;
	}
	*range = str;
	return (max - min);
}
