/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/10 13:39:14 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	str_to_lst(t_list **lst, char *str)
{
	int			i;
	long int	n;
	t_list		*lst1;

	i = 1;
	n = 0;
	lst1 = NULL;
	n = ft_atoi_checked(str);
	if (n == -2147483649)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	lst1 = new_list((int)n);
	add_back(lst, lst1);
	return (1);
}

t_list	*new_list(int value)
{
	t_list	*lst;

	lst = malloc (sizeof (t_list));
	if (!lst)
		return (NULL);
	lst -> value = value;
	lst -> index = -1;
	lst -> next = NULL;
	return (lst);
}

void	add_back(t_list **head, t_list *new)
{
	t_list	*tmp;

	if (!head || !new)
		return ;
	if (*head == NULL)
	{
		*head = new;
		return ;
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}

void	print_list(t_list *begin_list)
{
	t_list	*print;

	print = begin_list;
	while (print != NULL)
	{
		ft_printf("%d \n", print -> value);
		print = print -> next;
	}
}

void	free_list(t_list *lst)
{
	t_list	*free_list;

	while (lst != NULL)
	{
		free_list = (lst)-> next;
		free(lst);
		lst = free_list;
	}
}
