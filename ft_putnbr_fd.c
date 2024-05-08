/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:32:31 by rmarquar          #+#    #+#             */
/*   Updated: 2023/10/09 15:34:05 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nr;

	nr = n;
	if (nr < 0)
	{
		ft_putchar_fd('-', fd);
		nr = -nr;
	}
	if (nr >= 10)
	{
		ft_putnbr_fd(nr / 10, fd);
		ft_putchar_fd((nr % 10) + '0', fd);
	}
	else
		ft_putchar_fd(nr + '0', fd);
}
