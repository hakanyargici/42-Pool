
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

#include <stdio.h>

int	main()
{
	int x = 15;
	int y = 9;

	ft_ultimate_div_mod(&x, &y);
	printf("%d\n", x);
	printf("%d", y);
}
