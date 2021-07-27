int ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (!(str[i] >= 0 && str[i] <= 32))
			return (0);
	return (1);
}
