/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/05 19:22:20 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_list **a, t_list **b, int size)
{
	(void)b;
	if ((!a) || (!size))
		return ;
	get_index(*a);
	if ((size >= 2) && (size <= 5))
		tiny_sort(a, b, size);
	else if ((size > 5) && (size <= 10))
		mini_sort(a, b, size);
	else
		radix_sort(a, b, size);
	return ;
}
