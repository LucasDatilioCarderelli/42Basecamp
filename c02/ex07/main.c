#include<stdlib.h>
#include<stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "hElLo WolRd\n";

	printf("%s", ft_strupcase(str));
	return (0);
}