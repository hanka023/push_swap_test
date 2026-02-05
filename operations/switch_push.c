/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/05 14:10:10 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **a)
{
	t_list	*first;
	t_list	*second;

	if (! a || !*a || !(*a)->next)
		return ;
	first = *a;
	second = first -> next;
	first -> next = second -> next;
	second -> next = first;
	*a = second;
	ft_printf("sa\n");
}

void	sb(t_list **b)
{
	t_list	*first;
	t_list	*second;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	second = first -> next;
	first -> next = second -> next;
	second -> next = first;
	*b = second;
	ft_printf("sb\n");
}

void	ss(t_list **a, t_list **b)
{
	if (a && *a && (*a)->next)
		sa(a);
	if (b && *b && (*b)->next)
		sb(b);
	ft_printf("ss\n");
}

void	pa(t_list **a, t_list **b)
{
	t_list	*new_a;

	if (!b || !*b)
		return ;
	new_a = *b;
	*b = (*b)-> next;
	new_a -> next = *a;
	*a = new_a;
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	t_list	*new_b;

	if (!a || !*a)
		return ;
	new_b = *a;
	*a = (*a)-> next;
	new_b -> next = *b;
	*b = new_b;
	ft_printf("pb\n");
}
