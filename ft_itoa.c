/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:19:47 by rmarquar          #+#    #+#             */
/*   Updated: 2024/01/17 11:04:37 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	numlen(int n)
{
	size_t	length;

	if (n == 0)
		return (1);
	length = 0;
	if (n < 0)
		length++;
	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	long	nb;

	len = numlen(n);
	nb = n;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		result[0] = '0';
	result[len--] = '\0';
	while (nb != 0)
	{
		result[len] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (result);
}
