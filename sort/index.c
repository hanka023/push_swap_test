#include "../push_swap.h"

int count_index(t_list *lst)
{
	t_list *start;
	int index;

	start = lst;
	index = 0;
	while (start != NULL)
	{
		++index;
		start = start -> next;
	}
	return index;
}

void get_index(t_list *lst)
{
	t_list *start;
	t_list *second;
	int index;

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

int max_index(t_list *lst)
{
	int max = 0;

	while (lst)
	{
		if (lst -> index > max)
		 	max = lst -> index;
		lst = lst -> next;
	}
	int bits = 0;
	while (( max >> bits) != 0)
		++bits;

	return bits;
}
