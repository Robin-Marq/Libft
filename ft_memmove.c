/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:39:29 by rmarquar          #+#    #+#             */
/*   Updated: 2024/01/17 11:04:10 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if ((dst == NULL && src == NULL))
		return (NULL);
	d = dst;
	s = src;
	if (d < s)
		while (len-- > 0)
			*d++ = *s++;
	else
	{
		d = d + len - 1;
		s = s + len - 1;
		while (len-- > 0)
		{
			*d-- = *s--;
		}
	}
	return (dst);
}
