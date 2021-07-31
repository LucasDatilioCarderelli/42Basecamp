/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 00:19:35 by ldatilio          #+#    #+#             */
/*   Updated: 2021/07/31 02:20:15 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	char	*str;

	if (argc > 0)
	{
		str = argv[0];
		while (*str != 0)
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
