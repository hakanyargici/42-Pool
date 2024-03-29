/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyargici <yyargici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:27:41 by yyargici          #+#    #+#             */
/*   Updated: 2024/02/07 18:20:33 by yyargici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	start;

	start = '0';
	while (start <= '9')
	{
		write(1, &start, 1);
		start++;
	}
	write(1, "\n", 1);
}
