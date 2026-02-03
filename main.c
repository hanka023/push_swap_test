
#include "push_swap.h"

int check(int argc, char **argv)
{
	int fault;

	fault = 0;
	if (argc < 3)
		return(0);
	if(!ft_isnbr(argc, argv))
		fault = 1;
	if (!check_duplicates(argc, argv))
		fault = 1;
	if (fault == 1)
		return(0);
	return(1);
}

int main(int argc, char **argv)
{
	int count;
	t_list *lst;
	t_list *lst1;
	t_list *b;

	lst = NULL;
	lst1 = NULL;
	b = NULL;
	if (!check(argc, argv))
		return (0);
	lst = str_to_lst(argc, argv);
	if(!lst)
		return(0);
	if(!check_duplicates_lst(lst))
		return(0);
	if (!lst)
		return (0);
	lst1 = lst;

	get_index(lst1);
	count = count_index(lst);
	if (count >= 2 && count <= 5)
		tiny_sort(&lst1, &b, count);
	else
		radix_sort(&lst1, &b, count);
	print_list(lst1);
	free_list(lst1);
	return(0);
}
