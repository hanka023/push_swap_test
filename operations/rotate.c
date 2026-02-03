#include "../ft_list.h"
#include "../push_swap.h"


void ra(t_list **a)
{
	t_list *first;
	t_list *last;

	if (!a || !*a || !(*a)->next)
		return;
	first = *a;
	last = *a;
	while (last -> next)
		last = last -> next;
	*a = first -> next;
	first -> next = NULL;
	last -> next = first;
}

void rb(t_list **b)
{
	if (!b || !*b || !(*b)->next)
		return;

	t_list *first;
	t_list *last;

	first = *b;
	*b = (*b) -> next;
	last = *b;
	while (last -> next)
		last = last -> next;
	last -> next = first;
	first -> next = NULL;
}

void rr(t_list **a, t_list **b)
{
	if (a && *a && (*a)->next)
		ra(a);
	if (b && *b && (*b)->next)
		rb(b);
}
