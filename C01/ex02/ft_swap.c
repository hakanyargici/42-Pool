
void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

#include <stdio.h>

int	main()
{
	int x = 4;
	int y = 2;

	ft_swap(&x, &y);
	printf("%d\n", x);
	printf("%d", y);
}