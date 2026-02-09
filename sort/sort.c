/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/09 19:54:14 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_list **a, int size)
{
	t_list	*b;

	b = NULL;
	if (!a || !*a || size <= 1)
		return ;
	get_index(*a);
	if (size <= 5)
		tiny_sort(a, &b, size);
	else
		radix_sort(a, &b, size);
	return ;
}
