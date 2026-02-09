/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskalov <haskalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:42 by haskalov          #+#    #+#             */
/*   Updated: 2026/02/09 15:35:33 by haskalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_words(char *s)
{
	int	count;
	int	in_word;

	count = 0;
	while (*s)
	{
		in_word = 0;
		while (*s && (*s == ' ' || *s == '\n' || *s == '\t'))
			++s;
		while ((*s && *s != ' ' && *s != '\t' && *s != '\n'))
		{
			if (in_word == 0)
				count++;
			in_word = 1;
			++s;
		}
	}
	return (count);
}

int	world_len(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0' && s[len] != ' ' && s[len] != '\t' && s[len] != '\n')
		++len;
	return (len);
}

void	free_split(char **result)
{
	int	i;

	if (!result)
		return ;
	i = 0;
	while (result[i])
	{
		free(result[i]);
		++i;
	}
	free(result);
}

int	copy_word(char **result, int i, const char *s)
{
	int	j;
	int	len;

	j = 0;
	len = (world_len(s));
	result[i] = malloc(sizeof(char) * (len + 1));
	if (!result[i])
		return (0);
	while (j < len)
	{
		result[i][j] = s[j];
		j++;
	}
	result[i][len] = '\0';
	return (1);
}

char	**ft_split_ws(char *s)
{
	char	**words;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	words = (char **)malloc(sizeof(char *) * (count_words(s) + 1));
	if (!words)
		return (NULL);
	while (*s)
	{
		if (*s != ' ' && *s != '\n' && *s != '\t')
		{
			if (!copy_word(words, i, s))
			{
				free_split(words);
				return (NULL);
			}
			s = s + world_len(s);
			i++;
		}
		else
			s++;
	}
	words[i] = (NULL);
	return (words);
}
