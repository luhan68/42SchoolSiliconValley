/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 20:10:52 by lhan              #+#    #+#             */
/*   Updated: 2018/06/27 21:42:48 by lhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(int num, char **str)
{
	int k;

	k = 1;
	while (k < num)
	{
		while (*str[k])
		{
			ft_putchar(*str[k]);
			str[k]++;
		}
		ft_putchar('\n');
		k++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s2 == *s1))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = argc - 1;
	while (i > 1)
	{
		j = argc - 1;
		while (j > argc - i)
		{
			if (ft_strcmp(argv[j], argv[j - 1]) < 0)
			{
				temp = argv[j];
				argv[j] = argv[j - 1];
				argv[j - 1] = temp;
			}
			j--;
		}
		i--;
	}
	ft_putstr(argc, argv);
	return (0);
}
