/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 19:08:40 by lhan              #+#    #+#             */
/*   Updated: 2018/06/28 21:34:53 by lhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(argv));
	i = 0;
	while (i < argc)
	{
		str = strcat(str, argv[i++]);
		if (i != argc)
			str = strcat(str, "\n");
	}
	str = strcat(str, "\0");
	return (str);
}
