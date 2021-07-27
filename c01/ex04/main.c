#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 10;

	printf("a: %d %p | b: %d %p\n", a, &a, b, &b);
	ft_ultimate_div_mod(&a, &b);
	printf("a:  %d %p | b:  %d %p\n", a, &a, b, &b);
	return (0);
}
