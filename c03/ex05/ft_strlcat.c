/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:58:31 by ldatilio          #+#    #+#             */
/*   Updated: 2021/07/30 14:00:13 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_total;

	len_dest = ft_strlen(dest);
	len_total = len_dest + ft_strlen(src);
	if (size > len_dest)
	{
		i = -1;
		while (src[++i] != 0 && len_dest < size - 1)
			dest[len_dest + i] = src[i];
		dest[len_dest + i] = '\0';
		return (len_total);
	}
	return (ft_strlen(src) + size);
}
