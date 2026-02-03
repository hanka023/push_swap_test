#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_list.h"
#include "ft_printf/ft_printf.h"


//********	operations	********//

void sa(t_list **a);
void sb(t_list **b);
void ss(t_list **a, t_list **b);
void pa(t_list **a, t_list **b);
void pb(t_list **a, t_list **b);
void ra(t_list **a);
void rb(t_list **b);
void rr(t_list **a, t_list **b);
void rra(t_list **a);
void rrb(t_list **b);
void rrr(t_list **a, t_list **b);


//********	sort	********//

int		count_index(t_list *lst);
void	get_index(t_list *lst);
int		max_index(t_list *lst);
void	add_back(t_list **head, t_list *new);
void	radix_sort(t_list **a, t_list **b, int size);

//********	tiny_sort	********//
void	switch_list(t_list **lst);
void	three_sort(t_list **lst);
void	four_sort(t_list **a,t_list **b);
int		min_position(t_list **a);
void	tiny_sort(t_list **a, t_list **b, int size);

//********	utils	********//

int		ft_strcmp(const char *s1, const char *s2);
int		check_duplicates(int ac, char **av);
int		check_duplicates_lst(t_list *lst);
int		ft_atoi_checked(const char *str);
int		ft_is_char_nbr(char *str);
int		ft_isnbr(int ac, char **av);

//********	utils - list	********//

t_list	*str_to_lst(int argc, char **argv);
t_list	*new_list (int value);
void	print_list(t_list *begin_list);
void	free_list(t_list *lst);


#endif
