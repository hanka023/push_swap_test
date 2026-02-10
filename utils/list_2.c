/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/10 14:19:51 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_list *lst)
{
	while (lst && lst -> next)
	{
		if ((lst -> index) > (lst -> next -> index))
			return (0);
		else
			lst = lst -> next;
	}
	return (1);
}

int	split_to_lst(t_list **lst, char *jeden_split, char **split)
{
	if (!str_to_lst(lst, jeden_split))
	{
		free_split(split);
		free_list(*lst);
		return (0);
	}
	if (!check_duplicates_lst(*lst))
	{
		free_split(split);
		free_list(*lst);
		return (0);
	}
	return (1);
}

t_list	*av_to_lst(char **av)
{
	int		i;
	int		j;
	char	**split;
	t_list	*lst;

	i = 1;
	lst = NULL;
	while (av[i])
	{
		split = ft_split_ws (av[i]);
		if (!split)
			return (NULL);
		j = 0;
		while (split[j])
		{
			if (!split_to_lst(&lst, split[j], split))
				return (NULL);
			j++;
		}
		free_split(split);
		i++;
	}
	return (lst);
}
