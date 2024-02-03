/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyargici <yyargici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:28:42 by yyargici          #+#    #+#             */
/*   Updated: 2024/02/03 13:28:24 by yyargici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	start;

	start = 'a' ;
	while (start <= 'z')
	{
		write(1, &start, 1);
		start++;
	}
	write(1, "\n", 1);
}
