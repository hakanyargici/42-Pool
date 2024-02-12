
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

#include <stdio.h>

int	main()
{
	int	x = 42;
	int	y = 21;
	int	bolum;
	int	kalan;

	ft_div_mod(x, y, &bolum, &kalan);
	printf("%d\n", bolum);
	printf("%d", kalan);
}
