/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:28:21 by rmarquar          #+#    #+#             */
/*   Updated: 2023/10/11 16:36:04 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	ch = c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == ch)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
}
