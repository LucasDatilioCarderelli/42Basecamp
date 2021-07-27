#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_char_int(char x, char y)
{
	ft_putchar(48 + (x / 10));
	ft_putchar(48 + (x % 10));
	ft_putchar(' ');
	ft_putchar(48 + (y / 10));
	ft_putchar(48 + (y % 10));
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_char_int(a, b);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
