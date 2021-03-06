/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:12:49 by ldatilio          #+#    #+#             */
/*   Updated: 2021/07/28 20:12:50 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	min;
	int	max;

	min = 0;
	max = size - 1;
	while (min < max)
	{
		aux = tab[max];
		tab[max] = tab[min];
		tab[min] = aux;
		min++;
		max--;
	}
}

/* 
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp[10];

	i = 0;
	while (i < size)
	{
		temp[i] = tab[size - i - 1];
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = temp[i];
		i++;
	}
}
*/