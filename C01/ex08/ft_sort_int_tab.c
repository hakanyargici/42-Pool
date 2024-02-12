
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}

#include <stdio.h>

int	main()
{
	while (&ft_sort_int_tab)
	{
	int	tab[6] = {7,4,2,1,6,4};
	int	size = '6';
		ft_sort_int_tab(tab, size);
		printf("%d", tab[size]);
		return 0;
	}
}