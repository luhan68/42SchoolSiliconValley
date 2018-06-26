#include <unistd.h>
#include <math.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void	output_1(char i, char j, char k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (!((i == '7') && (j == '8') && (k == '9')))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				output_1(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}


int     main()
{
    ft_print_comb();
    return (0);
}
