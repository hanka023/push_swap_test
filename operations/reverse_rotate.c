/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/05 20:21:13 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **a)
{
	t_list	*last;
	t_list	*prev;

	last = *a;
	prev = NULL;
	if (!a || !*a || !(*a)->next)
		return ;
	while (last -> next)
	{
		prev = last;
		last = last -> next;
	}
	prev -> next = NULL;
	last -> next = *a;
	*a = last;
	ft_printf("rra\n");
}

void	rrb(t_list **b)
{
	t_list	*last;
	t_list	*prev;

	last = *b;
	prev = NULL;
	if (!b || !*b || !(*b)->next)
		return ;
	while (last -> next)
	{
		prev = last;
		last = last -> next;
	}
	prev -> next = NULL;
	last -> next = *b;
	*b = last;
	ft_printf("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	if (a && *a && (*a)->next)
		rra(a);
	if (b && *b && (*b)->next)
		rrb(b);
	ft_printf("rrr\n");
}
