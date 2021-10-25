/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:29:49 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/21 18:17:55 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
                                                                  
void	*ft_memcpy( void *dst, const void *src, size_t n)
{
	char	*ptrs;
	char	*ptrd;

	ptrs = (char *)src;
	ptrd = (char *)dst;
	while (n > 0)
	{
		*ptrd = *ptrs;
		ptrd++;
		ptrs++;
		n--;
	}
	return ((void *)dst);
}
