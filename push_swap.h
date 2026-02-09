/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/09 20:15:39 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "ft_list.h"
# include "ft_printf/ft_printf.h"

//********	operations	********//

void		sa(t_list **a);
void		sb(t_list **b);
void		ss(t_list **a, t_list **b);
void		pa(t_list **a, t_list **b);
void		pb(t_list **a, t_list **b);
void		ra(t_list **a);
void		rb(t_list **b);
void		rr(t_list **a, t_list **b);
void		rra(t_list **a);
void		rrb(t_list **b);
void		rrr(t_list **a, t_list **b);

//********	sort - sort	********//

void		sort(t_list **a, int size);

//********	sort - radix sort	********//

int			count_index(t_list *lst);
void		get_index(t_list *lst);
int			max_index(t_list *lst);
void		radix_sort(t_list **a, t_list **b, int size);

//********	sort - tiny_sort	********//

int			min_position(t_list **a);
void		three_sort(t_list **lst);
void		four_sort(t_list **a, t_list **b);
void		five_sort(t_list **a, t_list **b);
void		tiny_sort(t_list **a, t_list **b, int size);

//********	utils - check duplicates	********//

int			ft_strcmp(const char *s1, const char *s2);
int			check_duplicates(int ac, char **av);
int			check_duplicates_lst(t_list *lst);

//********	utils - atoi	********//

long int	ft_atoi_checked(const char *str);

//********	utils - isnbr	********//

int			ft_is_char_nbr(char *str);
int			ft_isnbr(char *str);

//********	utils - ft_split	********//

int			count_words(char *s);
int			world_len(const char *s);
void		free_split(char **split);
int			copy_word(char **result, int i, const char *s);
char		**ft_split_ws(char *ag);

//********	utils - list	********//

int			str_to_lst(t_list **lst, char *str);
t_list		*new_list(int value);
void		add_back(t_list **head, t_list *new);
void		print_list(t_list *begin_list);
void		free_list(t_list *lst);

//********	main	********//

int			split_to_lst(t_list **lst, char *jeden_split, char **split);
t_list		*av_to_lst(char **av);
int			main(int argc, char **argv);

#endif
