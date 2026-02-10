/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/10 14:12:14 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
