/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyargici <yyargici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:29:37 by yyargici          #+#    #+#             */
/*   Updated: 2024/02/01 18:10:20 by yyargici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int start)

{
	if (start >= 0)
		write(1, &"P", 1);
	else
		write(1, &"N", 1);
}

int	main(void)
{
	ft_is_negative(-1);
}
