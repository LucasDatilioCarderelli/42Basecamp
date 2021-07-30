/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 02:18:58 by ldatilio          #+#    #+#             */
/*   Updated: 2021/07/30 02:18:59 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	i = -1;
	while (str[++i] != 0)
		if ((str[i] >= 'a' && str[i] <= 'z') \
		&& (!((str[i - 1] >= 'a' && str[i - 1] <= 'z') \
		|| (str[i - 1] >= '0' && str[i - 1] <= '9') \
		|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))))
			str[i] = str[i] - 32;
	return (str);
}
