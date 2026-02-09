/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/09 20:07:47 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	min_position(t_list **a)
{
	t_list	*lst;
	int		pos;
	int		min_pos;
	int		min_val;

	lst = *a;
	pos = 0;
	min_pos = 0;
	min_val = lst -> index;
	while (lst)
	{
		if (lst -> index < min_val)
		{
			min_val = lst -> index;
			min_pos = pos;
		}
		lst = lst -> next;
		pos++;
	}
	return (min_pos);
}

void	three_sort(t_list **lst)
{
	int	first;
	int	second;
	int	third;

	first = (*lst)-> value;
	second = (*lst)-> next -> value;
	third = (*lst)-> next -> next -> value;
	if ((third > second) && (third > first))
	{
		if (first > second)
			sa(lst);
	}
	else if ((first > second) && (first > third))
	{
		ra(lst);
		if (((*lst)-> value) > ((*lst)-> next -> value))
			sa(lst);
	}
	else if ((second > first) && (second > third))
	{
		rra(lst);
		if (((*lst)-> value) > ((*lst)-> next -> value))
			sa(lst);
	}
}

void	four_sort(t_list **a, t_list **b)
{
	int	min_pos;

	min_pos = min_position(a);
	if (min_pos == 1)
		sa(a);
	else if (min_pos == 2)
	{
		ra(a);
		sa(a);
	}
	else if (min_pos == 3)
		rra(a);
	pb(a, b);
	three_sort(a);
	pa (a, b);
}

void	five_sort(t_list **a, t_list **b)
{
	int	min_pos;

	min_pos = min_position(a);
	if (min_pos == 1)
		sa(a);
	else if (min_pos == 2)
	{
		ra(a);
		sa(a);
	}
	else if (min_pos == 3)
	{
		rra(a);
		rra(a);
	}
	else if (min_pos == 4)
		rra(a);
	pb(a, b);
	four_sort(a, b);
	pa (a, b);
}

void	tiny_sort(t_list **a, t_list **b, int size)
{
	if (!a || !*a || size <= 1)
		return ;
	if (size == 2)
	{
		if (((*a)-> index) > ((*a)-> next -> index))
			sa(a);
	}
	else if (size == 3)
		three_sort(a);
	else if (size == 4)
		four_sort(a, b);
	else if (size == 5)
		five_sort(a, b);
	else
		return ;
}
