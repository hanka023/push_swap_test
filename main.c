/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/09 17:29:34 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



t_list	*av_to_lst(char **av)
{
	int i;
	int j;
	char **split;
	t_list *lst = NULL;

	i = 1;
	while (av[i])
	{
		split = ft_split_ws(av[i]);
		if(!split)
			return(NULL);
		j = 0;
		while (split[j])
		{
			if (!ft_isnbr(split[j]))
			{
				free_split(split);
				free_list(lst); 
				return (NULL);	
			}
			if (!str_to_lst(&lst, split[j]))
			{
				free_split(split);
      			free_list(lst); 
				return (NULL); 
			}
			j++;
		}
		if (!check_duplicates_lst(lst))
		{
			free_split(split);
			free_list(lst);
			return (NULL);
		}
		free_split(split);
		i++;
	}
	return(lst);
}

int	main(int argc, char **argv)
{
	int		count;
	t_list	*lst;

	(void)argc;
	lst = NULL;
	
	lst = av_to_lst(argv);
	if (!lst)
	{
		free_list(lst);
		return (0);
	}
	get_index(lst);
	count = count_index(lst);
	sort(&lst, count);
	//print_list(lst);
	free_list(lst);
	return (0);
}
// ARG=$(python3 -c "import random; print(' '.join(map(str, random.sample(range(-300, 300), 500))))")