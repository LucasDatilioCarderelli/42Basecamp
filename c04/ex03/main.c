#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	str[] = "---+--+1234ab567";

	printf("ft_atoi: %d\n", ft_atoi(str));
	return (0);
}
