#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    // int ptr;
    // int *nbr;

    // nbr = &ptr;
    // ft_ft(nbr);
    // printf("%d", ptr);

    int ptr;
    ft_ft(&ptr);
    printf("%d", ptr);
}