void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
}

#include <stdio.h>

int	main()
{
	int var;
	int *nbr2;
	int **nbr1;
	int ***nbr;
	
	nbr2 = &var;
	nbr1 = &nbr2;
	nbr = &nbr1;	

	ft_ultimate_ft(nbr);
	printf("%d", var);	
}

