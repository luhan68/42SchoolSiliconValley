/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 12:52:38 by lhan              #+#    #+#             */
/*   Updated: 2018/06/22 22:19:05 by lhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int n;
	int l;
	char sub[n];

	n = 0;
	while (str[n] != 0)
	{
		n++;
	}
	l = n;
	while (n >= 0)
	{
		sub[l - n] = str[n - 1];
		n--;
	}
	return (sub);
}
