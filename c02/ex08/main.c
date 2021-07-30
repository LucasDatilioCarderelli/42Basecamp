#include<stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "hElLo WolRd\n";

	printf("%s", ft_strlowcase(str));
	return (0);
}
