/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:00:29 by rmarquar          #+#    #+#             */
/*   Updated: 2024/01/17 11:03:43 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	char	*result;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	end = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > i)
		end--;
	result = (char *)malloc (sizeof(char) * (end - i + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, &s1[i], end - i + 1);
	return (result);
}

