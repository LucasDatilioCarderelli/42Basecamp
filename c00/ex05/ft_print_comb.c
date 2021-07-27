#include <unistd.h>

void	ft_comb(char d, char e, char f)
{
	write (1, &d, 1);
	write (1, &e, 1);
	write (1, &f, 1);
	if (d != '7' || e != '8' || f != '9')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_comb (a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
