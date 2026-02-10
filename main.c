/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/10 16:57:06 by haskalov         ###   ########.fr       */
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
	lst = av_to_lst(argv);
	if (!lst)
		return (0);
	get_index(lst);
	count = count_index(lst);
	sort(&lst, count);
	free_list(lst);
	return (0);
}
