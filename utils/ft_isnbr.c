
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/03 17:11:08 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_is_char_nbr(char *str)
{
	int isnbr;

	isnbr = 0;
	if (! str)
			return 0;
	while (*str && (*str == ' ' || *str == '\n' ||*str == '\t' ))
		++str;
	if (*str && (*str == '-' || *str == '+'))
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		isnbr = 1;
		++str;
	}
	if ( *str != '\0')
		return(0);
	return isnbr;
}

int ft_isnbr(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
			if (ft_is_char_nbr(av[i]) == 0)
			{
				ft_printf("Error\n");
				return(0);
			}
		++i;
	}
	return(1);
}
