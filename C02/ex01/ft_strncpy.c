/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabiyatanbas <rabiyatanbas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:03:38 by rtanbas           #+#    #+#             */
/*   Updated: 2024/02/11 22:54:09 by rabiyatanba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;
    
    i = 0;
    while (src[i] && i < n)
    {
       dest[i] = src[i];
       i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
