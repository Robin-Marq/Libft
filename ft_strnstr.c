/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:32:58 by rmarquar          #+#    #+#             */
/*   Updated: 2024/01/17 11:03:38 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	if (*haystack == 0 || ft_strlen(needle) > len)
		return (NULL);
	while (i <= len - ft_strlen(needle))
	{
		if (ft_strncmp(haystack + i, needle, ft_strlen(needle)) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
