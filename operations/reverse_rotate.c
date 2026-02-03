#include "../ft_list.h"
#include "../push_swap.h"


void rra(t_list **a)
{
	t_list *last = *a;
	t_list *prev = NULL;

	if (!a || !*a || !(*a)->next)
		return;
	while (last -> next)
	{
		prev = last;
		last = last -> next;
	}
	prev -> next = NULL;
	last -> next = *a;
	*a = last;
}

void rrb(t_list **b)
{
	t_list *last = *b;
	t_list *prev = NULL;

	if (!b || !*b || !(*b)->next)
		return;
	while (last -> next)
	{
		prev = last;
		last = last -> next;
	}
	prev -> next = NULL;
	last -> next = *b;
	*b = last;
}

void rrr(t_list **a, t_list **b)
{
	if (a && *a && (*a)->next)
		rra(a);
	if (b && *b && (*b)->next)
		rrb(b);
}
