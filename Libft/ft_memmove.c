/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:27:43 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/21 18:47:38 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned const char	*ptrs;
	unsigned char		*ptrd;	

	ptrs = (unsigned const char *)src;
	ptrd = (unsigned char *)dst;
	if (dst <= src)
	{
		while (len--)
			*ptrd++ = *ptrs++;
	}
	else
	{
		ptrd += len;
		ptrs += len;
		while (len--)
			*--ptrd = *--ptrs;
	}
	return ((void *)dst);
}
