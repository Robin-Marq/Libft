/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:17:42 by rmarquar          #+#    #+#             */
/*   Updated: 2024/01/17 11:03:56 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s != NULL && s[i] != '\0')
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (word);
}

static void	ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**result;
	int		size;
	int		j;

	i = 0;
	j = -1;
	result = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!result)
		return (NULL);
	while (++j < ft_count_word(s, c))
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		result[j] = ft_substr(s, i, size);
		if (!result)
		{
			ft_free(result, j);
			return (NULL);
		}
		i = i + size;
	}
	result[j] = 0;
	return (result);
}

