
void	ft_rev_int_tab(int *tab, int size)
{
	int	a = 0;
	int	b = size - 1;
	int	swap;

	while (a < size / 2)
	{
		swap = tab[a];
		tab[a] = tab[b];
		tab[b] = swap;
		a++;
		b--;
	}
}

#include <stdio.h>

int	main()
{
	while (&ft_rev_int_tab)
	{
		int	tab[6] = {1,6,4,2,7};
		int	size = '6';
			ft_rev_int_tab(tab,	size);
			printf("%d", *tab);
			return 0;
	}
	
}