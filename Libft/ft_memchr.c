/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:06:40 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/12 10:17:01 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (*(unsigned char *)(s + i) != (unsigned char)c && i < n)
	{
		i++;
	}
	if (*(unsigned char *)(s + i) != (unsigned char)c || i >= n)
		return (0);
	return ((void *)(s + i));
}
