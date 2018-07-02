/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 18:31:07 by lhan              #+#    #+#             */
/*   Updated: 2018/06/28 18:52:54 by lhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*str;

	if (min >= max)
		return (0);
	str = (int*)malloc(sizeof(*str) * (max - min));
	i = 0;
	while (i + min < max)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
