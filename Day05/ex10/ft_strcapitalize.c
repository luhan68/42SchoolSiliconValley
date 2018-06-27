/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 12:40:43 by lhan              #+#    #+#             */
/*   Updated: 2018/06/26 21:29:09 by lhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] && (str[i] >= 'a') && (str[i] <= 'z'))
		str[i] -= 32;
	i++;
	while (str[i])
	{
		if (!((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
					|| (str[i] >= 97 && str[i] <= 122)))
		{
			if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
				str[i + 1] -= 32;
			i += 2;
		}
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}