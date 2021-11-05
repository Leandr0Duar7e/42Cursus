/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:52:27 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/05 15:46:45 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char			*str1;
	const char			*str2;
	unsigned int		i;

	i = 0;
	str1 = (const char *)s1;
	str2 = (const char *)s2;
	while (i < n && str1[0] == str2[0])
	{
		str1++;
		str2++;
		i++;
	}
	if (str1[0] > str2[0])
		return (1);
	else if (str1[0] < str2[0])
		return (-1);
	return (0);
}
