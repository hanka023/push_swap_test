/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/05 14:12:01 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **a)
{
	t_list	*first;
	t_list	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	last = *a;
	while (last -> next)
		last = last -> next;
	*a = first -> next;
	first -> next = NULL;
	last -> next = first;
	ft_printf("ra\n");
}

void	rb(t_list **b)
{
	t_list	*first;
	t_list	*last;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	*b = (*b)-> next;
	last = *b;
	while (last -> next)
		last = last -> next;
	last -> next = first;
	first -> next = NULL;
	ft_printf("rb\n");
}

void	rr(t_list **a, t_list **b)
{
	if (a && *a && (*a)->next)
		ra(a);
	if (b && *b && (*b)->next)
		rb(b);
	ft_printf("rr\n");
}
