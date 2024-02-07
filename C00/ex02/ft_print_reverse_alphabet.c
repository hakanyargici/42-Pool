/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyargici <yyargici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:23:43 by yyargici          #+#    #+#             */
/*   Updated: 2024/02/07 18:08:23 by yyargici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	start;

	start = 'z' ;
	while ('a' <= start)
	{
		write(1, &start, 1);
		start--;
	}
	write(1, "\n", 1);
}
