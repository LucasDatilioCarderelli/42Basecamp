#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	*src;
	char	*dest;

	src = malloc(8 * sizeof(char));
	dest = malloc(11 * sizeof(char));
	src = "0123456789";
	printf("src: %s\n", src);
	printf("ft_strlcpy: %d\n", ft_strlcpy(dest, src, 8));
	printf("   strlcpy: %d\n", ft_strlcpy(dest, src, 8));
	printf("dest: %s\n", dest);
	return (0);
}
