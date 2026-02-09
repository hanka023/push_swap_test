/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/08 16:55:09 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_char_nbr(char *str)
{
	int	isnbr;

	isnbr = 0;
	if (!str)
		return (0);
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ))
		++str;
	if (*str && (*str == '-' || *str == '+'))
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		isnbr = 1;
		++str;
	}
	if (*str != '\0')
		return (0);
	return (isnbr);
}

int	ft_isnbr(char *str)
{
	if (!ft_is_char_nbr(str))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}
