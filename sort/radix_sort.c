/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/05 16:49:12 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_index(t_list *lst)
{
	t_list	*start;
	int		index;

	start = lst;
	index = 0;
	while (start != NULL)
	{
		++index;
		start = start -> next;
	}
	return (index);
}

void	get_index(t_list *lst)
{
	t_list	*start;
	t_list	*second;
	int		index;

	index = 0;
	start = lst;
	while (start != NULL)
	{
		index = 0;
		second = lst;
		while (second != NULL)
		{
			if ((start -> value) > (second -> value))
				index ++;
			second = second -> next;
		}
		start -> index = index;
		start = start -> next;
	}
}

int	max_index(t_list *lst)
{
	int	max;
	int	bits;

	max = 0;
	while (lst)
	{
		if (lst -> index > max)
			max = lst -> index;
		lst = lst -> next;
	}
	bits = 0;
	while ((max >> bits) != 0)
		++bits;
	return (bits);
}

void	radix_sort(t_list **a, t_list **b, int size)
{
	int	bits;
	int	i;
	int	j;

	i = 0;
	j = 0;
	bits = max_index(*a);
	while (i < bits)
	{
		j = 0;
		while (j < size)
		{
			if (((*a)-> index >> i) & 1)
				ra(a);
			else
				pb(a, b);
			++j;
		}
		while (*b)
			pa(a, b);
		++i;
	}
}
