#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	add;

	add = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{	
			nb++;
			add = 1;
		}
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48 + add);
}