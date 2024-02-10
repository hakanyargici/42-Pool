#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

int main()
{
	int x = 5;
	int y = 2;

	ft_swap(&x, &y);
	printf("%d\n", x);
	printf("%d", y);
	
	return 0;
}