/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyargici <yyargici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:15:57 by yyargici          #+#    #+#             */
/*   Updated: 2024/02/15 16:15:58 by yyargici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = argc - 1;
    while (i > 0)
    {
        j = 0;
        while (argv[i][j] != '\0' && argc)
        {
            ft_putchar(argv[i][j]);
            j++;
        }
        ft_putchar('\n');
        i--;
    }
    return (0);
}
