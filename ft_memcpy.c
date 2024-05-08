/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:26:23 by rmarquar          #+#    #+#             */
/*   Updated: 2024/01/17 11:04:14 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const char		*s;
	size_t			i;

	i = 0;
	d = dest;
	s = src;
	if ((dest == NULL && src == NULL))
		return (NULL);
	while (i++ < n)
		*d++ = *s++;
	return (dest);
}

