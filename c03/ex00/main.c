#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "abcdefghi";
	char	s2[] = "abcdefg";
	char	s3[] = "abcdEfghi";
	char	s4[] = "ab0defghi";
	char	s5[] = {'a', 'b', 'c', -10, -20, '\0'};

	printf("s1: %s, s2: %s, s3: %s, s4: %s, s5: %s\n", s1, s2, s3, s4, s5);
	printf("cmp_12 = %d, og_cmp_12 = %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("cmp_13 = %d, og_cmp_13 = %d\n", ft_strcmp(s1, s3), strcmp(s1, s3));
	printf("cmp_14 = %d, og_cmp_14 = %d\n", ft_strcmp(s1, s4), strcmp(s1, s4));
	printf("cmp_15 = %d, og_cmp_15 = %d\n", ft_strcmp(s1, s5), strcmp(s1, s5));
	return (0);
}
