/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/07 18:10:14 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	mini_sort(t_list **a, t_list **b, int size)
{
	int	min_pos;
	int len;

	(void)size;
	(void)b;
	len = list_size(a);
	
	min_pos = min_position(a);
}

int list_size(t_list **lst)
{
	int size;
	t_list *lst1;

	lst1 = *lst;
	size = 0;
	while (lst1)
	{
		lst1 = (lst1) -> next;
		++size;
	}
	return (size);
}

