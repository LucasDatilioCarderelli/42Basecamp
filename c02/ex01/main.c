#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char *src = malloc(sizeof(char) * 11);
	char *dest = malloc(sizeof(char) * 11);
	char *ret;
	
	src = "0123456789";
	ret = ft_strncpy(dest, src, 5);
	printf("src : %s\n", src);
	printf("dest: %s\n", dest);
	printf("ret : %s\n", ret);
	return (0);
}