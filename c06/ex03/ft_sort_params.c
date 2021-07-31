/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 01:30:01 by ldatilio          #+#    #+#             */
/*   Updated: 2021/07/31 02:20:58 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_swap(char *s1, char *s2)
{
	char	*temp;

	*temp = *s1;
	*s1 = *s2;
	*s2 = *temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1 && s2)
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char argv)
{
	return (0);
}
