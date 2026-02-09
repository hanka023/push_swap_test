/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/09 20:22:46 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	main(int argc, char **argv)
{
	int		count;
	t_list	*lst;
	int		i;

	(void)argc;
	lst = NULL;
	i = 1;
	while (argv[i])
	{
		if (!ft_isnbr(argv[i]))
			return (0);
		++i;
	}
	lst = av_to_lst(argv);
	if (!lst)
	{
		free_list(lst);
		return (0);
	}
	get_index(lst);
	count = count_index(lst);
	sort(&lst, count);
	free_list(lst);
	return (0);
}
