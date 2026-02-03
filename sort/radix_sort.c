
#include "../push_swap.h"

void radix_sort(t_list **a, t_list **b, int size)
{
int bits;
int i;
int j;

i = 0;
j = 0;
bits = max_index(*a);
while (i < bits)
{
	j = 0;
	while(j < size)
	{
		if (((*a) -> index >> i ) & 1)
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
