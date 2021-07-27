#include<stdio.h>

void	ft_swap(int *a, int *b);
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {4, 3, 5, 4, 2, 5, 1, 8, 9};
	int	size = 9;
	int	i = 0;
	i = 0;
	while (i < size){
		printf("%d, ", tab[i]);
		i++;
	}
		printf("\n");
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size){
		printf("%d, ", tab[i]);
		i++;
	}
		printf("\n");
	return (0);
}
