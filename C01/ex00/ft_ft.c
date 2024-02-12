
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>

int	main()
{
	int ptr;

	ft_ft(&ptr);
	printf("%d", ptr);
}