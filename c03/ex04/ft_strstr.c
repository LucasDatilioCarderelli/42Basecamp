/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:51:49 by ldatilio          #+#    #+#             */
/*   Updated: 2021/07/30 13:51:50 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != 0)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != 0)
		{	
			if (to_find[j + 1] == 0)
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
