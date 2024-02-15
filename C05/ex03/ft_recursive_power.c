int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power));
}

#include <stdio.h>

int	main()
{
	printf("%d", ft_recursive_power(4,3));
}