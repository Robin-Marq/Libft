/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:29:57 by rmarquar          #+#    #+#             */
/*   Updated: 2023/10/16 09:33:00 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*result;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

// char	to_upper(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c == 'r' || c == 'm')
// 		return (c - 32);
// 	else
// 		return (c);
// }

// int	main(void)
// {
// 	char	*s1 = "robin marquardt";

// 	char *result = ft_strmapi(s1, &to_upper);

// 	if (result != NULL)
// 	{
// 		printf("%s is the result\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Speicherallokation fehlgeschlagen.\n");
// 	}
// 	return (0);
// }
