/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/03 17:10:36 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		++i;
	}
	return (0);
}

int check_duplicates(int ac, char **av)
{
	int i;
	int	j;

	i = 1;
	j = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) == 0)
			{
				ft_printf("Error\n");
				return(0);
			}
			++j;
		}
		++i;
	}
	return(1);
}

int check_duplicates_lst(t_list *lst)
{
	t_list *start;
	t_list *next2;

	start = lst;
	next2 = start -> next;
	while (start)
	{
		next2 = start -> next;
		while(next2)
		{
			if (start -> value == next2 -> value)
			{
				ft_printf("Error\n");
				return(0);
			}
			else
				next2 = next2 -> next;
		}
		start = start -> next;
	}
	return(1);
}
