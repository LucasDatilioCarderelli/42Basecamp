#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_get_values(char *str, int *values)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (str[++i] != '\0')
		if (str[++i] >= '1' && str[i] <= '4')
			values[j] = str[i] - '0';
}

int	main(int argc, char	**argv)
{
	char	*str;
	int	*values;
	
	values = malloc(sizeof(int) * 16);
	str = argv[1];
	ft_get_values(str, values);

	return (0);
}
