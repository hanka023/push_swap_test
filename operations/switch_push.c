#include "../ft_list.h"
#include "../push_swap.h"

void sa(t_list **a)
{
	t_list *first;
	t_list *second;

	if(! a || !*a || !(*a)->next)
		return;
	first = *a;
	second = first -> next;
	first -> next = second -> next;
	second -> next = first;
	*a = second;
}

void sb(t_list **b)
{
	t_list *first;
	t_list *second;

	if (!b || !*b || !(*b)->next)
		return;
	first = *b;
	second = first -> next;
	first -> next  = second -> next;
	second -> next = first;
	*b = second;
}

void ss(t_list **a, t_list **b)
{
	if (a && *a && (*a)->next)
		sa(a);
	if (b && *b && (*b)->next)
		sb(b);
}

void pa(t_list **a, t_list **b)
{
	t_list *new_a;
	
	if(!b || !*b)
		return;
	new_a = *b;
	*b = (*b) -> next;
	new_a -> next = *a;
	*a = new_a;
}

void pb(t_list **a, t_list **b)
{
	t_list *new_b;
	
	if (!a || !*a)
		return;
	new_b = *a;
	*a = (*a) -> next;
	new_b -> next = *b;
	*b = new_b;
}

