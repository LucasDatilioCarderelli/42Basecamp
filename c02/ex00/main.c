#include<stdio.h>
#include<stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src = malloc(sizeof(char) * 11);
	char	*dest = malloc(sizeof(char) * 11);
	char	*ret;

	src = "0123456789";
	ret = ft_strcpy(dest, src);
	printf("src : %s\n", src);
	printf("dest: %s\n", dest);
	printf("ret : %s\n", ret);
	return (0);
}
