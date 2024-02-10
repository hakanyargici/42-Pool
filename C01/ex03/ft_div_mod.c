#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (a != 0 || b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main()
{
	int a = 10;
	int b = 5;
	int	x;
	int	y;

	ft_div_mod(a, b, &x, &y);
	printf("%d\n", x);
	printf("%d", y);
	return 0;

}