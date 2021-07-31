/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 00:37:01 by ldatilio          #+#    #+#             */
/*   Updated: 2021/07/31 00:48:04 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	char	*str;

	while (--argc > 0)
	{
		str = argv[argc];
		while (*str != 0)
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
