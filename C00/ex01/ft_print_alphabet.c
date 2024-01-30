/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyargici <yyargici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:28:42 by yyargici          #+#    #+#             */
/*   Updated: 2024/01/30 14:19:42 by yyargici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void    ft_print_alphabet(void)
{
        char    start;

        start = 'z';
        while ('a' >= start)
        {
                write(1, &start, 1);
                start--;
        }     
}
