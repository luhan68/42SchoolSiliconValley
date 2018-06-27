/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 21:58:46 by lhan              #+#    #+#             */
/*   Updated: 2018/06/27 12:12:14 by lhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (dest[index] != '\0')
	{
		if (index < n)
			dest[index] = src[index];
		else
			dest[index] = 0;
		index++;
	}
	return (dest);
}
